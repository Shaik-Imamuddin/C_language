#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *p = &n;
    printf("%d\n%p\n%d",n,p,*p);
    return 0;
}