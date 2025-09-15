/*

Assignment operator(=) is used to assign the values to a variable

we can assign 
    value to a variable        -> a = 10 
    variable to a variable     -> a = b
    constant to a variable     -> a = 3.14
    expression to a variable   -> a = a+b

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    printf("%d\n",a);
    b=a;
    printf("%d",b);
    return 0;
}