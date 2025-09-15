/*
do while loop is also known as exit control looping structure.
it will promise single time statement block execution even though the condition is false.


syntax:
    do{
        statement block;
    }while(condition);

*/
#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    do{
        printf("1 time promise Execution ");
        printf("%d\n",i);
        if(i==10)
            break;
        i++;
    }while(n==0);
    return 0;
}