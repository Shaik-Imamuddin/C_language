/*
It suggests the compiler to store variable in CPU registers instead of RAM (for fast access).
Usually used for loop iterations.
You can't get the address of a register variable using &.
*/

#include<stdio.h>
int main(){
    register int i;
    for(i=0;i<5;i++) {
        printf("%d ",i);
    }
    return 0;
}