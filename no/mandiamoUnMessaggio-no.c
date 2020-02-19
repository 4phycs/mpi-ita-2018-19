#include "mpi.h"
#include <stdio.h>
int main(int argc, char *argv[])   {
    int rank, size, i;                
    int ciccio[10];                        // array che voglio mandare
    MPI_Status status;                     // oggetto di MPI che serve quando si riceve un mess  
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);    
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);   
    if (rank == 0)   {                     // rank= 0 riempie l'array e manda il messaggio
      for (i=0; i<10; i++) ciccio[i] = i;  // il rank 0 riempie l'array chiamato ciccio            
     
    }                                      
    
    if (rank == 1)   {                     // rank= 1 ricevi il messaggio
      for (i=0; i<10; i++) ciccio[i] = 0;  // anche il rank 1 ha un array ciccio pieno di 0,                    
      
      for (i=0; i<10; i++) {               // vediamo adesso gli ingressi di ciccio a video  
                printf(" ciccio[%d] = %d \n", i, ciccio[i]);
        }
    }
    MPI_Finalize();
    return 0;
}
