#include<mpi.h>
#include<stdio.h>
 int main(int argc, char *argv[]) {
 int rank;
 MPI_Comm griglia;
 int dim[2],period[2],riordina;
 int coord[2],nuovo_rank;
 # define TRUE 0;   // occhio che in C non ci sono le Boolean 
 # define FALSE 1;  // vanno definite apposta

   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD,&rank);
 

 
 
 
 
 
 
 
 

MPI_Finalize();
}

