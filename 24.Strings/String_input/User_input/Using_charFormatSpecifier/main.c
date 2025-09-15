#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char str[n+1];
    for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
    }
    str[n]='\0';
    for (int i=0;i<n;i++) {
        printf("%c",str[i]);
    }
    return 0;
}

/*
->it won't Accept the charecters more than size coz the loop condition will fails 
*/