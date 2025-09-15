#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",num);//value
    printf("%d\n",&num);//Address of variable
    printf("%d",sizeof(num));//size of the variable
}