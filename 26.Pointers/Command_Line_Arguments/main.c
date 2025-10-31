/*
Command line arguments are nothing but
passing inputs to a program at the time of execution

This allows user to take the input without using scanf.

Syntax:
    int main(int variable_name, char *variable_name[])

*/

#include<stdio.h>
int main(int argc,char *argv[]){
    printf("%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    return 0;
}