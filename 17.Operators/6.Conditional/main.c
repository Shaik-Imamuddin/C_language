/*

Conditional operator is also known as ternary operator.
it is used as an alternate of if else conditional statement.

Syntax:
    (condition)?Statement Block - 1:Statement Block - 2;

if the condition is true Statement Block - 1 is executed else
Statement Block - 2 will be executed.

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",(a>b)?a:b);
    return 0;
}