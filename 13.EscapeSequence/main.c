#include<stdio.h>
int main(){

    printf("Hello\nWorld");
    /*Output:
        Hello
        World
    */
    printf("Hello\tWorld");
    /*Output:
        Hello   World
    */
    printf("Hello \bWorld");
    /*Output:
        HelloWorld
    */
    printf("Hello Hi\rWorld");
    /*Output:
        World Hi
    */
    printf("\'Hello World\'");
    /*Output:
        'Hello World'
    */
    printf("\"Hello World\"");
    /*Output:
        "Hello World"
    */
    printf("\\Hello World\\");
    /*Output:
        15\08\1945
    */
    printf("Hello\0World");
    /*Output:
        Hello
    */
    return 0;
}

//run the above statements one by one 