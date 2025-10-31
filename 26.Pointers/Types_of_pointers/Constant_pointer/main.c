/*

we can't change the address of a constant pointer
once it was intialized with some other address.
we can change the value pointing by the address.

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int *const ptr = &a;
    printf("%d\n",*ptr);
    // ptr=&b; NA because pointer is constant
    printf("%d",*ptr);
    return 0;
}