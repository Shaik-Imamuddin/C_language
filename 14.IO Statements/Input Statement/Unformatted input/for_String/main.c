#include<stdio.h>
int main(){
    char str[20];
    // gets(str);   //reads more then size charecters
    fgets(str,20,stdin);//safer than gets() reads only size charecters
    puts(str);
    return 0;
}