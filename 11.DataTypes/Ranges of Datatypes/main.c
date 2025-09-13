#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    // char
    printf("char range: %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("unsigned char range: 0 to %u\n\n",UCHAR_MAX);

    // short
    printf("short range: %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short range: 0 to %u\n\n",USHRT_MAX);

    // int
    printf("int range: %d to %d\n",INT_MIN,INT_MAX);
    printf("unsigned int range: 0 to %u\n\n",UINT_MAX);

    // long
    printf("long int range: %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned long int range: 0 to %lu\n\n",ULONG_MAX);

    // long long
    printf("long long int range: %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned long long int range: 0 to %llu\n\n",sizeof(unsigned long long),ULLONG_MAX);

    // float
    printf("float range: %e to %e\n",FLT_MIN,FLT_MAX);
    
    //double
    printf("double range: %le to %le\n",DBL_MIN,DBL_MAX);
    printf("long double range: %Le to %Le\n",LDBL_MIN,LDBL_MAX);

    return 0;
}


/*

Output:
char range: -128 to 127
unsigned char range: 0 to 255

short range: -32768 to 32767
unsigned short range: 0 to 65535

int range: -2147483648 to 2147483647
unsigned int range: 0 to 4294967295

long int range: -2147483648 to 2147483647
unsigned long int range: 0 to 4294967295

long long int range: -9223372036854775808 to 9223372036854775807
unsigned long long int range: 0 to 18446744069414584328

float range: 1.175494e-038 to 3.402823e+038
double range: 2.225074e-308 to 1.797693e+308
long double range: -0.000000e+000 to -1.#QNAN0e+000

*/