/*
goto is used to transfer the control to a labeled statement unconditionally.

*/

#include<stdio.h>
int main(){
    printf("Hello Wolrd\n");
    goto ucgo;
    printf("Welcome to C language\n");
    ucgo:
    printf("goto is an undconditional statement");
}