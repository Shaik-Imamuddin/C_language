/*
continue is used to skip the current iteration of a loop and continue from the next iteration

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%5!=0)
            continue;
        printf("%d\t",i);
    }
}