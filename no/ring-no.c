#include <mpi.h>  // versione modificata da PA del codice ring.c su  www.mpitutorial.com
#include <stdio.h>
int main(int argc, char** argv) {
  int world_rank;
  int world_size;
  int messaggio;
  MPI_Init(NULL, NULL);
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
  MPI_Comm_size(MPI_COMM_WORLD, &world_size);

  
   // INSERIRE QUI LE FUNZIONI MPI_Send e MPI_Recv 
   // INSERIRE QUI LE FUNZIONI MPI_Send e MPI_Recv 
   // INSERIRE QUI LE FUNZIONI MPI_Send e MPI_Recv 
  
  MPI_Finalize();
} 
