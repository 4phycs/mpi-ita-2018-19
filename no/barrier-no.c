#include <mpi.h>
#include <stdio.h>
int main(int argc, char** argv) {
    int rank;
    int size;
    MPI_Init(NULL, NULL);                    // Inizializza
    MPI_Comm_size(MPI_COMM_WORLD, &size);    // dimensione del world
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);    // rank del processo


   
                    }
    MPI_Finalize();  // finalizza
}
