#include <stdio.h>
#include <mpi.h>
int main(int argc, char **argv) {
  MPI_Init(NULL, NULL);
  int dato=0; 
  int vecchio_rank,     size;
  int   nuovo_rank, new_size;
  MPI_Comm nuovoComm;                    // nome di un nuovo communicator
  MPI_Comm_rank(MPI_COMM_WORLD, &vecchio_rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  
  
  
  
  
  
  

  printf("Vecchio rank: %d,   nuovo rank: %d,   colore: %d, dato=%d \n",
    vecchio_rank,  nuovo_rank, colore, dato);
  MPI_Comm_free(&nuovoComm);
  MPI_Finalize();
}

