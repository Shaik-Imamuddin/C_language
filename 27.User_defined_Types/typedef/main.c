/* 

typedef ia an user-defined datatype

which is used to create alias for an existing datatype.

typedef doesn't create a new_type , it just gives another name

*/

#include<stdio.h>
typedef int ing;

int main(){
    ing a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    return 0;   
}