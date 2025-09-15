/*
if you know the no.of iterations or no.of times the statement block need to be executed
then we can go with for loop.

syntax:
    for(intialization;condition;increment/decrement){
        statement block;
    }

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",i);
    }
    return 0;
}