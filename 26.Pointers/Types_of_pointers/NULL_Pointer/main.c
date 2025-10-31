/*

The NULL pointer doesn't points to any valid memory location.
and it contains NULL value.

    datatype *variable_name=NULL;

*/

#include<stdio.h>
int main(){
    int *ptr=NULL;
    if(ptr==NULL)
        printf("NULL pointer");
    else    
        printf("Not a NULL Pointer");
    return 0;
}