/*
    Default storage class for local variables inside a function.
    Exists only while the function is running.
    Stored in stack memory.
*/

#include<stdio.h>
int main(){
    auto int n;
    scanf("%d",&n);
    printf("%d\n",n);
    return 0;
}