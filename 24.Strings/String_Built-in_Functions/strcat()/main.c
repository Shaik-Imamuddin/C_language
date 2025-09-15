#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[50],a;
    scanf("%[^\n]s",str1);
    scanf("%c\n",&a);
    scanf("%[^\n]s",str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}