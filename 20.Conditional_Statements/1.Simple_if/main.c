/*
    Syntax:
        if(condition){
            statement - block;
        }

if the condition is true it will returns the statament block 
else it doesn't return anything

*/

//Example

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==10)
        printf("You Have Entered the Value 10");
}

/* Note: 
    if the statement block contains only single statement 
    then dont need to use flower braces 

->in the above example if you given the input 10 
then only the statement block will be executed

*/