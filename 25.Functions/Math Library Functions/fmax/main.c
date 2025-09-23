#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf",fmax(a,b));
    return 0;
}