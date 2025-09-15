/*
Bitwise operators are used to perform operation on binary bits.

these operators will returns output in integer values but the operations will be performned in binary bits.

& -> it returns true if both are true else false

| -> it returns flase if both are false else true

^ -> it returns flase if both are same bits else it returns true if both are different bits

~ -> it will applies 2's compliment . -(n+1) is mathematical formula for bitwise not.

<< -> it shifts 2 bits to the left side . variable_name*(2^no.of shifts) is mathematical formula for bitwise left shift.

>> -> it shifts 2 bits to the right side . variable_name/(2^no.of shifts) is mathematical formula for bitwise right shift.

*/

#include<stdio.h>
int main(){
    int a=4,b=5;
    printf("%d\t",a&b);
    printf("%d\t",a|b);
    printf("%d\t",a^b);
    printf("%d\t",~a);
    printf("%d\t",a<<2);
    printf("%d",a>>2);
    return 0;
}

// Output:4    5    1    -5    16    1