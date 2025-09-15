/*

if we wan't to execute a block of statements based on multiple conditions
then will go with nested if statement.

    Syntax:
        if(condition-1){
            if(condition-2){
                Statement block - 1;
            }
        }
        else{
            Statement block - 2;
        }

it will returns the statement block -1 if both condition-1 and condition-2 is true
else it will returns statement block - 2.

Condition inside another condition is nothing but nested if statement 

we can palce any conditional statement like simple , if-else or if-else if


*/

// Example

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        if(n%2==0)
            printf("%d is a Positive Even Number",n);
        else
            printf("%d is a Positive Odd Number",n);
    }
    else
        printf("%d is a Negative Number",n);
}