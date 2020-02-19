#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int rank, size, i;                // 
    int Ngrande = 100, Npiccolo = 10;
    int vettPartenza[Ngrande], vettRicezione[Npiccolo];    // vettori di partenza e ricezione

    int* sendCount;   // ptr array che indica quanti oggetti elementari sono inviati ad ogni processo 
    int* spostamento; // ptr array che indica di quanti oggetti mi sposto rispetto al punto di partenza per ogni processo 
    int recieveCount; // quanti ingressi devo ricevere

    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &size);   // 
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);   //

    for( i =0; i<Npiccolo; i++) vettRicezione[i] = 0 ;   // azzera i vettori di arrivo di ogni processo (incluso lo 0)

    //
    
    //if (rank == 0 ) // ======================= qui lavora solo il rank =0 =============================
    // quali vettori allocca?
    // quali vettori costruisce
    // 
    //
    //====================================== fine parte dedicata solo al rank 0 =======================

    // qui mettere recieveCount: chi lo necessita? 

    // if (rank ==0) mettere il sendrecV per il rank=0   
    // if (rank!=0) mettere il sendrecv per gli altri rank


    printf("rank = %d dati ricevuti: %d,  %d,  %d,  %d, %d\n", rank, vettRicezione[0], 
    vettRicezione[1], vettRicezione[2], vettRicezione[3], vettRicezione[4]);

    MPI_Finalize();
    return 0;
}
