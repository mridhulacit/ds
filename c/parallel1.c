#include<mpi.h>
#include<stdio.h>
int main(int argc,char** argv)
{
    MPI_Init(NULL,NULL);
    int size
    MPI_Comm_size(MPI_COMM_WORLD,&size);
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    int number=5;if(rank==0)
    {
        MPI_Send(&number,1,MPI_INT,1,0,MPI_COMM_WORLD);
    }
    else if(rank==1)
    {
        MPI_Recv(&number,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Processor 1 received number %d from processor 0 \n",number);
    }
    MPI_Finalize();
    return 1;
}
