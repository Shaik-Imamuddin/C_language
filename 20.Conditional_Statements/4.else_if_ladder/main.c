/*
    Syntax:
        if(condition-1){
            Statement block - 1;
        }
        else if(condition-2){
            Statement block - 2;
        }
            .   .   .   .   .
            .   .   .   .   .
            .   .   .   .   .
        else if(condition-n){
            Statement block - n;
        }  
        else{
            false Statement block;
        }

it will returns statement block - 1 if the condition-1 is true else it will checks with condition-2.

it will returns statement block - 2 if the condition-2 is true.

like that it will checks with all the conditions till n if all the previous conditions fails
if any of the condition is true it will returns the respected statement block
Associated with condition .

it will returns flase block of statements if all the conditions Fails.
 
*/

//Example:

#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    if(day==1)
        printf("Monday");
    else if(day==2)
        printf("Tuesday");
    else if(day==3)
        printf("Wednesday");
    else if(day==4)
        printf("Thursday");
    else if(day==5)
        printf("Friday");
    else if(day==6)
        printf("Saturday");
    else if(day==7)
        printf("Sunday");
    else
        printf("No Day");
}