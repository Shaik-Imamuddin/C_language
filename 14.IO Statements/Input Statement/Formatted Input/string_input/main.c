#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);//it will read input until a space chrecter is detected
    // scanf("%[^\n]s",str);//it will read input until the cursor comes to next line
    printf("%s",str);
    return 0;
}