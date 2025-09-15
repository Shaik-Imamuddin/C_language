/*
Arithmetic operators are used to perform arithmetic operations like addition , subtraction , multipliction , division , modulo division .

addition        ->   +
subtraction     ->   -
multipliction   ->   *   
division        ->   /
modulo division ->   %

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\t",a+b);
    printf("%d\t",a-b);
    printf("%d\t",a*b);
    printf("%d\t",a/b);
    printf("%d",a%b);
    return 0;
}

/*
Input:
10 20
Output:
30    -10    200    0    10
*/