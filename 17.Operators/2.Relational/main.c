/*
Relational operators are also known as comparision operators
These operators are used to compare 2 values

By comparing 2 values we can form simple conditions
relational operators returns output in boolean values either true(1) or false(0).

The following are relational operators

Greater than            -   >
Less than               -   <
Greater than equal to   -   >=
Greater than equal to   -   <=
equal to equal to       -   ==
not equal to            -   !=
*/


#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\t",a>b);
    printf("%d\t",a<b);
    printf("%d\t",a>=b);
    printf("%d\t",a<=b);
    printf("%d\t",a==b);
    printf("%d",a!=b);
    return 0;
}

/*
Input:
10 20
Output:
0    1    0    1    0    1    
*/