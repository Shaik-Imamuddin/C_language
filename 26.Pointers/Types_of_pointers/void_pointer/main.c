/*
A void pointer is special type of pointer that can hold the address the any datatype

but before using it.you must tell the compiler what type of data it points to by using typecasting.

Syntax:
    void *variable_name;

*/

// void pointer dereferencing to int
#include<stdio.h>
int main(){
    int a;float b;
    scanf("%d%f",&a,&b);
    void *ptr;
    ptr = &a;
    printf("%d\n",*(int*)ptr);
    ptr = &b;
    printf("%.2f",*(float*)ptr);
}