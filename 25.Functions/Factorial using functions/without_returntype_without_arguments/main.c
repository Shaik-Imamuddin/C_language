#include<stdio.h>
void factorial(){
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
}
int main(){
    factorial();
    return 0;
}