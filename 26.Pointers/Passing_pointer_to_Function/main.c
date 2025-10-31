/*
Passing a pointer to function means 

The arguments Passing to the function should be a pointer variable 
and  at the time of function calling we have to pass address of variable 
instead of its actual value.

Syntax:
    Declaration Arguments:
    return_type function_name(datatype *variable_name,....)//we can pass any no.of arguments

    calling Patamenter:
    function_name(&variable_name,....)//must match with no.of argument

*/

#include<stdio.h>

int add(int *a,int *b){
    return *a+*b;
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",add(&x,&y));
    return 0;
}