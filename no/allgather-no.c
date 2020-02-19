#include <stdio.h>
#include <mpi.h>

int main (int argc, char *argv[])
{ int size, rank, N=5;
  int partenza[N];
  int i, ngrande, quanti  = 3;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  for (i=0; i<N; i++)  partenza[i]=rank;         // initizializza il vettore di partenza

  ngrande=quanti*size;                           // dimensione dell'array di arrivo
  int arrivo[ngrande];                           // allocate the gathering buffer

  // codice da inserire
  // codice da inserire
  // codice da inserire

  MPI_Finalize();
}
