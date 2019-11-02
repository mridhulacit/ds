#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char **argv) {

    int rank, size;
    const int locn=5;
    int localarr[locn];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    srand(rank);
    for (int i=0; i<locn; i++) 
        localarr[i] = rand() % 100;

    for (int proc=0; proc<size; proc++) {
        if (rank == proc) {
            printf("Rank %2d has values: ",rank);
            for (int i=0; i<locn; i++)
                printf(" %d ", localarr[i]);
            printf("\n");
        }
        MPI_Barrier(MPI_COMM_WORLD);
    }

    int localres[2];
    int globalres[2];
    localres[0] = localarr[0];
    for (int i=1; i<locn; i++) 
        if (localarr[i]  > localres[0]) localres[0] = localarr[i];

    localres[1] = rank;

    MPI_Allreduce(localres, globalres,1, MPI_INT,MPI_MAX, MPI_COMM_WORLD);

    if (rank == 0) {
        printf("highest value is %d\n", globalres[0]);
    }

    int localres1[2];
    int globalres1[2];
    localres1[0] = localarr[0];
    for (int i=1; i<locn; i++) 
        if (localarr[i]  < localres1[0]) localres1[0] = localarr[i];

    localres1[1] = rank;

    MPI_Allreduce(localres1, globalres1,1, MPI_INT,MPI_MIN, MPI_COMM_WORLD);

    if (rank == 0) {
        printf("lowest value value is %d\n", globalres1[0]);
    }

    MPI_Finalize();

    return 0;
}