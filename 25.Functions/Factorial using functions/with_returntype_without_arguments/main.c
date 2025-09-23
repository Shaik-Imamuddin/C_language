#include<stdio.h>
int factorial(){
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    printf("%d",factorial());
    return 0;
}