/*
if you don't know the no.of iterations then we can go with for loop.
while loop is also known as entry control looping structure.

syntax:
    while(condition){
        statement block;
    }

*/
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if(n==0)
        count=1;
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}