#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL (100*100*100)
#define MIN_VAL 1

int findMaxTriangle(int *sticks,int num_sticks);

int int_sort(const void *a,const void *b){
    if(*(int *)a>*(int *)b){
        return -1;
    }else if(*(int *)a==*(int *)b){
        return 0;
    }
    return 1;
}

int main(void){
    int sticks[100],num_sticks=13;
    int i_num_sticks;
    int ans_index;
    int ans;

    //initial setup
    srand(10);
    for(i_num_sticks=0;i_num_sticks<100;i_num_sticks++)
        sticks[i_num_sticks]=0;

    //sets data
    for(i_num_sticks=0;i_num_sticks<num_sticks;i_num_sticks++){
        sticks[i_num_sticks]=rand()%(MAX_VAL)+1;
    }

    
    ans_index=findMaxTriangle(sticks,num_sticks);


    //show answer
    if(ans_index>=0){
        ans=sticks[ans_index]+sticks[ans_index+1]+sticks[ans_index+2];
        printf("ans=%d(%d,%d,%d)\n",ans,sticks[ans_index],sticks[ans_index+1],sticks[ans_index+2]);
    }else{
        printf("No Triangle\n");
    }
    
    return 0;
}

int findMaxTriangle(int *sticks,int num_sticks){
    int i;
    
    qsort((void *) sticks,num_sticks,sizeof(int),int_sort);
    
    for(i=0;i<num_sticks-2;i++){
        if(sticks[i]<sticks[i+1]+sticks[i+2]){
            return i;
        }
    }

    return -1;
}
