#include <stdio.h>
#include <mpi.h>
int main (int argc, char *argv[])
{
  int  tutti, rank;
  int root;                               // solo per ricordare definiamo una var per il root
  int array[2];                           // definiamo un array con 2 posti
  MPI_Init(&argc,&argv);
  MPI_Comm_size(MPI_COMM_WORLD, &tutti);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  root = 0;                               // decidiamo che root=> rank=0
  if(rank==root) array[0]=0, array[1]=1;  // solo il root ha i dati all'inizio

  
 MPI_Finalize();
}
