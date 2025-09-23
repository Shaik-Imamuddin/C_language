#include <stdio.h>

int n=100;

void func1(){
    printf("Global variable inside func1: %d\n",n);
}
void func2(){
    printf("Global variable inside func2: %d\n",n);
}

int main() {
    printf("Global variable inside main: %d\n",n);
    func1();
    func2();
    return 0;
}