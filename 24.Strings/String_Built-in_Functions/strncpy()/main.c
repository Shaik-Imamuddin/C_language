#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[50], a;
    int n;
    scanf("%[^\n]", str1);
    scanf("%c", &a);
    scanf("%[^\n]", str2);
    scanf("%d", &n);
    strncpy(str1, str2, n);
    str1[n] = '\0';
    printf("%s", str1);
    return 0;
}