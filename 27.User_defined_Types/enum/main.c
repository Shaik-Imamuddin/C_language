/*

enum (enumeration) is a user defined datatype

it is used to represent a group of constant values

to create an enumeration we need to use a keyword called enum followed by the name of enum

by default , the first item has value 0 and the next items incremented by 1 automatically.

we can also assign the values according to requirement.

Syntax:

enum enum_name {
    constant1,
    constant2,
    ...
    constant_n
};


*/

// #include<stdio.h>

// enum ts{RED=1,ORANGE,GREEN};

// int main(){
//     enum ts c;
    
//     int n;
//     scanf("%d",&n);

//     c=n;

//     if(c==RED)printf("RED");
//     else if(c==ORANGE)printf("ORANGE");
//     else if(c==GREEN)printf("GREEN");
//     else printf("Invalid Choice");

//     return 0;
// }



#include<stdio.h>

enum Week {MON=1,TUE,WED,THU,FRI,SAT,SUN};

int main(){
    enum Week day;
    
    int n;
    scanf("%d",&n);

    if(n>=1 &&n<=7){
        day=n;
        switch(day){
            case MON:printf("Monday");break;
            case TUE:printf("Tuesday");break;
            case WED:printf("Wednesday");break;
            case THU:printf("Thursday");break;
            case FRI:printf("Friday");break;
            case SAT:printf("Saturday");break;
        }
    }
    else{
        printf("Enter Number Between 1 and 7.\n");
    }
    return 0;
}