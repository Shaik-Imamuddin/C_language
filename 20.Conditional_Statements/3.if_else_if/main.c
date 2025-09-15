/*
    Syntax:
        if(condition-1){
            Statement block - 1;
        }
        else if(condition-2){
            Statement block - 2;
        }
        else{
            Statement block - 3;
        }

it will returns statement block - 1 if the condition-1 is true else it will checks with condition-2.

it will returns statement block - 2 if the condition-2 is true.

it will returns statement block - 3 if both the conditions Fails.
 
*/

//Example:

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is Maximum",a);
    else if(b>c)
        printf("%d is Maximum",b);
    else
        printf("%d is Maximum",c);
}