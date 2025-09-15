#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    for (int i=0;i<strlen(str);i++) {
        printf("%c",tolower(str[i]));
    }
    return 0;
}