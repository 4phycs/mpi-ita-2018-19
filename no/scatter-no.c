#include "mpi.h"
#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int rank, size, i;                // 
    int conto;
    int Ngrande = 100, Npiccolo = 10;
    int vettPartenza[Ngrande], vettRicezione[Npiccolo];    // vettori di partenza e ricezione

    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &size);   // 
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);   //

    if (rank == 0)  for( i =0; i<Ngrande; i++) vettPartenza[i]=i;     // interi 
    if (rank != 0)  for( i =0; i<Npiccolo; i++) vettRicezione[i] = 0 ;   // azzera il vettore di arrivo
    
    //                     CODICE DA INSERIRE
    //                     CODICE DA INSERIRE
    
    MPI_Finalize();
    return 0;
}

