#include<stdio.h>

void myFun(){
    int n=100;
    printf("Local variable inside function: %d\n",n);
}

int main() {
    myFun();
    // printf("%d",n); //Error
    return 0;
}