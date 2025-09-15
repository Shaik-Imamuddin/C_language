#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[50],a;
    int n;
    scanf("%[^\n]",str1);  
    scanf("%c",&a);        
    scanf("%[^\n]",str2);   
    scanf("%d",&n);         
    int result = strncmp(str1,str2,n);
    if(result==0)
        printf("First %d characters are equal",n);
    else if(result<0)
        printf("First string is smaller in first %d characters",n);
    else
        printf("First string is greater in first %d characters",n);
    return 0;
}