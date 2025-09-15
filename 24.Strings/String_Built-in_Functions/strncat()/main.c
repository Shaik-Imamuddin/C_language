#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[50], a;
    int n;
    scanf("%[^\n]s",str1);
    scanf("%c",&a);  
    scanf("%[^\n]s",str2);   
    scanf("%d",&n);        
    strncat(str1," ",1);
    strncat(str1,str2,n);
    printf("%s", str1);
    return 0;
}