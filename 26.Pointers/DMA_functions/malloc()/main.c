/*

malloc() stands for memory allocation.
It allocates a block of memory of a specified size in bytes and returns a pointer to it.
The memory contains garbage (uninitialized) values.

Syntax:
    ptr = (type *)malloc(size_in_bytes);

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
    free(arr);
    return 0;
}