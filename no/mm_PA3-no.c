#include <mpi.h>    // inventati 2 matrici, fai il prodotto usando MPI
#include <stdio.h>  // questo prodotto e' molto poco ottimizzato ma utile
#include <stdlib.h> // serve per exit
#define  N  16	    // dimensione delle matrici

//============================================================
int A[ N ][ N ], B[ N ][ N ], C[ N ][ N ], D[ N ][ N ];

void costruisci_matrice(int m[ N ][ N ])
{

  int n=0;
  int i, j;
  for (i=0; i< N ; i++)
    for (j=0; j< N ; j++)
      m[i][j] = n++;                 // matrice con ingressi progressivi
}

//============================================================


void costruisci_identita2(int m[ N ][ N ])  // costruisci matrice identita' x 2
{
  int i, j;
  for (i=0; i< N ; i++)
    for (j=0; j< N ; j++){
                  m[i][j]=0;
      if (i == j) m[i][j]=2; // cosi' almeno modifica un po' la matrice...
                         }
}


//============================================================

void matrice_a_video(int m[ N ][ N ])   //scrivi a video una matrice (piccola altrimenti non si vede bene)
{
  int i, j;
  for (i=0; i< N ; i++) {
    printf("\n\t| ");
    for (j=0; j< N ; j++) printf("%3d ", m[i][j]);
    printf("|");
  }
}

//============================================================
//============================================================

int main(int argc, char *argv[])
{
  int rank, P, from, to, i, j, k, numero_processi;
  int tag = 123;                        // qualunque valore va bene

  MPI_Status status;                    
  MPI_Init (&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);	// mio rank
  MPI_Comm_size(MPI_COMM_WORLD, &numero_processi);    // numero di processi

  if ( N %numero_processi != 0) {     // esci se N/numero_processi da' resto diverso da zero 
    if (rank==0) printf("La dimensione della matrice (%d) non e' divisibile per il numero di processi usati (%d)\n", N, numero_processi);
    MPI_Finalize();
    exit(-1);              // ricorda: serve header stdlib.h altrimenti da warning
   }


  if (rank==0) {
    printf("Calcolo il prodotto di matrici C=AB, di dimensione %dx%d\n", N,N);
    costruisci_matrice(A);     // crea tutta la matrice A nel rank 0
    costruisci_identita2(B);   // nella matrice B metti l'identia' 
  }

  // fare un MPI_Bcast   ( puntatore     , quanti_dati, tipo, root, communicator) della matrice B 

  // from(mio_rank) = indice di riga di A da cui mandare elementi al processso con mio_rank 
  // to(mio_rank) = indice di riga di A fino a cui mandare edm al processo con mio_rank 
 
  // fare un MPI_Scatter ( puntatoreInvio, quanti, tipo, puntatorericezione, quanti, tipo, root, communicator)
  // pezzi di matrice A 

  printf("Il processo %d, calcola le righe di C da %d a %d)\n", rank, from, to-1);

   // ogni lavora in queste righe della matrice A 
   // prende tutte le colonne della matrice B  
   // azzera la C
   // somma elementi riga per colonna
   // prodotto scalare "i" dipende dal processo
    

  // raggruppare tutti i dati nel rank=0 con un MPI_Gather
  // MPI_Gather (puntatoreInvio, quanti, tipo, puntatoreArrivo, quanti, tipo, root, communicator )
  
  if (rank==0) {     // 
    printf("\n\n");
    matrice_a_video(A);
    printf("\n\n\t       * \n");
    matrice_a_video(B);
    printf("\n\n\t       = \n");
    matrice_a_video(C);
    printf("\n\n");
  }

  MPI_Finalize();
  return 0;
}


