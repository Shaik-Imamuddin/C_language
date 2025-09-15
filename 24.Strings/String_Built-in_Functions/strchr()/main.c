#include<stdio.h>
#include<string.h>
int main(){
    char str[100],a,ch;
    scanf("%[^\n]",str);
    scanf("%c",&a);
    scanf("%c",&ch);
    char *pos = strchr(str,ch);
    if(pos != NULL)
        printf("First occurrence of '%c' at index: %ld",ch,pos-str);
    else
        printf("Character not found");
    return 0;
}