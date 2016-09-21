#include <stdio.h>
//#include <stdlib.h>

#define DATA_SIZE 10

__global__ void cusum(int *data,int *size,float *sum){
    int thi=threadIdx.x;

    if(thi<DATA_SIZE){
        sum+=data[thi];
    }
    
}

int main(int argc,char *argv[]){
    int *list;
    int *dev_list;
    int i;
    int size=DATA_SIZE;
    int *dev_size;
    float sum=0;
    float *dev_sum;
    cudaError_t err;
    
    srand(1);
    
    list=(int *)malloc(sizeof(int)*DATA_SIZE);
    for(i=0;i<DATA_SIZE;i++){
        list[i]=rand()%20;
        printf("%d\n",list[i]);
    }

    err=cudaMalloc((void **)&dev_list,sizeof(int)*DATA_SIZE);
    err=cudaMalloc((void **)&dev_sum,sizeof(float));
    err=cudaMalloc((void **)&dev_size,sizeof(int));

    err=cudaMemcpy(dev_list,list,sizeof(int)*DATA_SIZE,cudaMemcpyHostToDevice);
    err=cudaMemcpy(dev_sum,&sum,sizeof(float),cudaMemcpyHostToDevice);
    err=cudaMemcpy(dev_size,&size,sizeof(float),cudaMemcpyHostToDevice);
    
    if(err != cudaSuccess){
        printf("cudaMalloc Error\n");
    }

    cusum<<<1,10>>>(dev_list,dev_size,dev_sum);

    err=cudaMemcpy(&sum,dev_sum,sizeof(float),cudaMemcpyDeviceToHost);
    if(err != cudaSuccess){
        printf("cudaMalloc Error\n");
    }

    cudaFree(dev_sum);
    cudaFree(dev_list);
    cudaFree(dev_size);
    free(list);
    printf("sum=%f\n",sum);
    
    return 0;
}
