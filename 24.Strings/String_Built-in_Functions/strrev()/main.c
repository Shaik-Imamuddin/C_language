#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    printf("%s",strrev(str));
    return 0;
}