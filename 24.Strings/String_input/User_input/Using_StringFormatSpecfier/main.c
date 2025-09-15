#include <stdio.h>
int main(){
    char str[50];
    // scanf("%s",str);//it will accept word Input
    scanf("%[^\n]s",str);//it will accept line input 
    printf("%s",str);
    return 0;
}

/*
->if we entered the charecters more than size then also it will consider because of sequential memory location
*/