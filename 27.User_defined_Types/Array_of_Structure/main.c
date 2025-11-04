/*

An array of structures means we create multiple structure variables stored in a single array.

it is useful while handling large sets of similar data


Syntax:

struct structure_name{
    datatype member_1;
    datatype member_2;
    .   .   .   .   .
    .   .   .   .   .
    datatype member_n;
};

struct structure_name array_name[size];

*/

#include<stdio.h>

struct Student{
    int roll;
    char name[20];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    for(int i=0;i<n;i++){
        printf("%d %s %.0f\n",s[i].roll,s[i].name,s[i].marks);
    }
}