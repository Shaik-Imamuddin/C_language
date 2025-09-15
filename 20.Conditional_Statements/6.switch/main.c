/*

switch statement is used as an alternate of else if ladder

instead of conditions we need to palce cases and 

we have to break each and every case except the default case

    Syntax:
        switch(condition){
            case 1:
                statement-block-1;
                break;
            case 2:
                statement-block-2;
                break;
                .   .   .   .   .
                .   .   .   .   .
                .   .   .   .   .
            case n:
                statement-block-n;
                break;
            default:
                flase statement-block;
        }
 
in the above syntax at switch condition we can also use variable or value or expression

*/

//Example:

#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch(m){
        case 12:case 1:case 2:printf("Winter");break;
        case 3:case 4:case 5:printf("Summer");break;
        case 6:case 7:case 8:printf("Spring");break;
        case 9:case 10:case 11:printf("Rainy");break;
        default:printf("No season");
    }
}