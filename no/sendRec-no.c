#include <stdio.h>
#include <mpi.h>
int main (int argc, char * argv[]) {
  int  nproc, rank;
  int Narray = 2;
  float da_inviare[Narray], ricevere[Narray]; 
  MPI_Status status;
  MPI_Init(&argc,&argv);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  ricevere[0]=0, ricevere[1]=0;
  if (rank==0) {
    da_inviare[0]=2, da_inviare[1]=4;                 // scrivi l'array per il processo 0
 









    printf("%d: ricevuto[0]=%f ricevuto[1]=%f\n", rank, ricevere[0], ricevere[1]);
  MPI_Finalize();
}
