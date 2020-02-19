#include <stdio.h>
#include <mpi.h>
#define N 4                            // dimensione array
int main (int argc, char *argv[])
{ int  nproc, rank;
  int i, m, a[N];
  MPI_Status status;                  // stato ricezione
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  for (i=0; i<N; i++)  a[i]=N*rank+i;  // il rank 1 ha 4,5,.. il rank 2 ha 8,9,...
  printf("il processo %d contiene:", rank); 
  for (i=0; i<N; i++) printf("%d ", a[i]);
  printf("\n");                       // vai a capo dopo di ogni scrittura

  INSERIRE codice
  INSERIRE codice
  INSERIRE codice
  
  printf("il processo %d ha ricevuto:", rank);
  for (i=0; i<N; i++) printf("%d ", a[i]);
  printf("\n");
  
  MPI_Finalize();
}
