#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    printf("%f\n",a);//by default float will print 6 decimal places
    printf("%.2f",a);//it will print the value with 2 decimal places
    return 0;
}