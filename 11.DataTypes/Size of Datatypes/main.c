#include<stdio.h>
int main(){
    printf("char: %zu byte\n",sizeof(char));
    printf("unsigned char: %zu byte\n",sizeof(unsigned char));

    printf("short: %zu bytes\n",sizeof(short));
    printf("unsigned short: %zu bytes\n",sizeof(unsigned short));

    printf("int: %zu bytes\n",sizeof(int));
    printf("unsigned int: %zu bytes\n",sizeof(unsigned int));

    printf("long: %zu bytes\n",sizeof(long));
    printf("unsigned long: %zu bytes\n",sizeof(unsigned long));

    printf("long long: %zu bytes\n",sizeof(long long));
    printf("unsigned long long: %zu bytes\n",sizeof(unsigned long long));

    printf("float: %zu bytes\n",sizeof(float));
    printf("double: %zu bytes\n",sizeof(double));
    printf("long double: %zu bytes\n",sizeof(long double));

    return 0;
}

/*
Output:
char: 1 byte
unsigned char: 1 byte
short: 2 bytes
unsigned short: 2 bytes
int: 4 bytes
unsigned int: 4 bytes
long: 4 bytes
unsigned long: 4 bytes
long long: 8 bytes
unsigned long long: 8 bytes
float: 4 bytes
double: 8 bytes
long double: 12 bytes
*/