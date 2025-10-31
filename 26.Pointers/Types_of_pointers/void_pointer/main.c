/*
A void pointer is special type of pointer that can hold the address the any datatype

but before using it.you must tell the compiler what type of data it points to by using typecasting.

Syntax:
    void *variable_name;

*/

// void pointer dereferencing to int
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    void *ptr;
    ptr = &n;
    printf("%d",*(int*)ptr);
}


//void pointer dereferencing to float

// #include<stdio.h>
// int main(){
//     float n;
//     scanf("%f",&n);
//     void *ptr;
//     ptr = &n;
//     printf("%.2f",*(float*)ptr);
// }