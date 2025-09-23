/*
If you are passing array as an argument to a function then it is nothing but Passing Arrays to functions
*/

#include<stdio.h>

void printArray(int arr[],int size) {
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
    return 0;
}