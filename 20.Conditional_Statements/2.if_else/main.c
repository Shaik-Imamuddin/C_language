/*
    Syntax:
        if(condition){
            Statement block - 1;
        }
        else{
            Statement block - 2;
        }

it will returns statement block - 1 if the condition is true 
else it will returns statement block - 2 .
 
*/

//Example:

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}


// It will print Even if the condition is true else it will print Odd