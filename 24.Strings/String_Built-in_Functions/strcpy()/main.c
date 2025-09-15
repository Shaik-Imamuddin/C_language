#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[50],a;
    scanf("%[^\n]s",str1);
    scanf("%c",&a);        
    scanf("%[^\n]s",str2);  
    strcpy(str1,str2);     
    printf("%s",str1);
    return 0;
}