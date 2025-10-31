/*
Passing an array to a pointer is nothing but array of pointer

it a process of Assinging the array variable to a pointer variable, array variable points to the base address of array
the pointer variable will also points to base address if the array is assigned to pointer.

we can also traverse using pointers instead of index.

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p = arr;
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",p+i);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}