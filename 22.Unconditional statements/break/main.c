/*
break is used to terminate the execution flow of a loop or switch statement immediately

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",i);
        if(i==10)
            break;
    }
}