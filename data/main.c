#include <mpi.h>
#include <stdio.h>

int main(int argc, char **argv) {
  MPI_Init(NULL, NULL);
  
  int world_size, world_rank, name_len;
  char processor_name[MPI_MAX_PROCESSOR_NAME];

  MPI_Comm_size(MPI_COMM_WORLD, &world_size);
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
  MPI_Get_processor_name(processor_name, &name_len);
  
  printf("Hello, world! Sayng hi from: [PROCESSOR %s], (RANK/PROCESSORS) - %d/%d\n\n",
         processor_name, world_rank, world_size);
  
  MPI_Finalize();

  return 0;
}