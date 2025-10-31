/*
By using pointer Arthemetic we can modify the memory addresses stored in pointers

The possible operations supported are , increment , decrement , addition , subtraction.

*/
//Increment and Decrement
#include<stdio.h>
int main(){
    int arr[4] = {10,20,30,40};
    int *ptr=arr;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
    return 0;
}

//Addition and Subtraction
// #include<stdio.h>
// int main(){
//     int arr[4] = {10,20,30,40};
//     int *ptr1=arr,*ptr2=&arr[2];
//     printf("%d\n",*ptr1+*ptr2);
//     printf("%d\n",*ptr1-*ptr2);
//     return 0;
// }

