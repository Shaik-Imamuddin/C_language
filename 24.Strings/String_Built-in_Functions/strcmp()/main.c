#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[50],a;
    scanf("%[^\n]",str1);
    scanf("%c",&a);   
    scanf("%[^\n]",str2);

    int result = strcmp(str1,str2);

    if(result==0)
        printf("Strings are equal");
    else if(result<0)
        printf("First string is smaller");
    else
        printf("First string is greater");
    return 0;
}