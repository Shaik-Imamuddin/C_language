/*

realloc() stands for re-allocation.
It changes (increases or decreases) the size of previously allocated memory block using malloc/calloc
without losing stored data (if possible).

syntax:
ptr = (type *)realloc(ptr, new_size);

*/
#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d",&n);

    int *arr;
    arr=(int *)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int new_n;
    scanf("%d",&new_n);

    arr=(int *)realloc(arr,new_n*sizeof(int));

    if(arr==NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    if(new_n>n){
        for(int i=n;i<new_n;i++){
            scanf("%d",&arr[i]);
        }
    }

    for(int i=0;i<new_n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}