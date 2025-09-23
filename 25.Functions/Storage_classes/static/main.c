/*
Keeps the variable alive for the whole program, even if it is declared inside a function.
Initializes only once, and remembers its value across function calls.
Stored in data segment (not stack).
*/

#include <stdio.h>
void fun() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() {
    fun();
    fun();
    fun();
    return 0;
}