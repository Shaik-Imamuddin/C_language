/*
Tells the compiler that the variable is defined somewhere else (maybe another file).
Used for global variables across multiple files.
*/

#include<stdio.h>
extern int n;
int main(){
    printf("%d",n);
    return 0;
}