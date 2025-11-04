/*
A union is a user-defined data type like structure, but all members share the same memory location.
So only one member can store a value at a time.

Synatx:
union union_name {
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};


Accessing union members:

union union_name variable_name;
variable_name.member1;

By using pointers:

union union_name *ptr;
ptr->member1;

*/

#include<stdio.h>

union Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    union Student s;

    scanf("%d",&s.roll);
    printf("%d\n", s.roll);

    scanf("%s", s.name);
    printf("%s\n",s.name);

    scanf("%f",&s.marks);
    printf("%.0f\n",s.marks);

    return 0;
}