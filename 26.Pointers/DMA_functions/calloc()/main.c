/*

calloc() stands for contiguous allocation.
It allocates memory for multiple blocks and initializes all bytes to zero.

Syntax:
ptr = (type *)calloc(num_of_elements, size_of_each_element);
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d",&n);

    int *arr;
    arr=(int *)calloc(n,sizeof(int));

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