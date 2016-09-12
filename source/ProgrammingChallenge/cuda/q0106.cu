#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 10

__global__ void quicksort(int *data,int left,int right){
    unsigned int thread_id=threadIdx.x
    int pivot;
    int min,max;
    int i;
    for(i=0;i<DATA_SIZE;i++){
    }
}

__device__ void ave(int *data,int size){
    

}
 
__host__ void launch_quicksort(int *data,int count){
    quicksort<<<1,1>>>(data,0,count-1);
}

int main(int argc,char *argv[]){
    int list[DATA_SIZE];
    int *dev_c;
    int i;
    cudaError_t err;
    
    srand(1);

    for(i=0;i<DATA_SIZE;i++)
        list[i]=rand()%20;

    err=cudaMalloc((void **)&dev_c,sizeof(int)*DATA_SIZE);
    if(err != cudaSuccess){
        printf("cudaMalloc Error\n");
    }

    launch_quicksort<<<1,1>>>(dev_c);

    
    err=cudaMemcpy(&dev_c,list,sizeof(int)*DATA_SIZE,cudaMemcpyDeviceToHost);
    if(err != cudaSuccess){
        printf("cudaMalloc Error\n");
    }
    
    for(i=0;i<DATA_SIZE;i++)
        printf("%d\n",list[i]);

    
    return 0;
}
