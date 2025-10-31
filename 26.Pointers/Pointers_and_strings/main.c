/*
if you assinged a string to a pointer
it will points to the first charecter(base address) of a string
we have to increment the pointer 
to access the remaining charecters of the string when we are using pointer to string.
*/

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);

    char *ptr = str;

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}

//Modifying the strings using pointers

//we can also modify the string using pointers
//traverse to the address where we need to change
//and update the charecter with input charecter 

// #include <stdio.h>
// int main() {
//     char str[100],ch;
//     scanf("%[^\n]",str);
//     char *ptr = str;
//     scanf(" %c",&ch);
//     *ptr = ch;  
//     printf("%s\n",str);
//     return 0;
// }