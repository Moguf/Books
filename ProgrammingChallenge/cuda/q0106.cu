#include <stdio.h>

int main(int argc,char *argv[]){
    int *dev_c;
    cudaError_t err;
    
    err=cudaMalloc((void **)&dev_c,sizeof(int));
    if(err != cudaSuccess){
        printf("cudaMalloc Error\n");
    }
    
    return 0;
}
