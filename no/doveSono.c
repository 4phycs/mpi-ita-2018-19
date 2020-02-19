#include <stdio.h>
#include <unistd.h>
#include <limits.h>  // serve per definire PATH_MAX (lunghezza massima)
#include "mpi.h"
int main(int argc, char** argv) {
int me, nproc;
char hostname[PATH_MAX];
MPI_Init(&argc, &argv);
MPI_Comm_rank(MPI_COMM_WORLD, &me);
MPI_Comm_size(MPI_COMM_WORLD, &nproc);
if(gethostname(hostname, PATH_MAX) == 0){
printf("Sono il processo %d di %d  localizzato @ %s\n",
me, nproc, hostname);
} else {
printf("Sono un clone perso %d su un totale di %d !\n",
me, nproc);
}
MPI_Finalize();
return 0;
}
