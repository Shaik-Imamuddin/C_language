/*
Logical operators are used to compare 2 simple conditions

By comparing 2 simple conditions we can form compound conditions
logical operators also returns output in boolean values either true(1) or false(0).

The following are logical operators

logical AND - &&
logical OR  - || 
logical NOT - !

&& -> it returns true if both conditions are true else it returns flase.
|| -> it returns flase if both conditions are flase else it returns true.
!  -> it returns true if condition fails else 
      it returns flase if the condition is true
*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\t",a>b && a>=b);
    printf("%d\t",a<b || a==b);
    printf("%d\t",!(a>b));
    return 0;
}

/*
Input:
10 20
Output:
0    1    1
*/