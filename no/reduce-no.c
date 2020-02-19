#include "mpi.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    int rank, size;                // 
    int vettorePar[2], vettoreRec[2];    // vettori di partenza e ricezione
    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &size);   // 
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);   //

     CODICE DA INSERIRE
     CODICE DA INSERIRE
     CODICE DA INSERIRE
    

     if (rank == 0 )
     printf("rank = %d Riduzioni: %d,  %d \n", rank, vettoreRec[0], vettoreRec[1]);
     
    MPI_Finalize();
    return 0;
}
