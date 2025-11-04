/*

we can also access the members of a structure by using pointer.

for that we need to store the address of a structure variable in a pointer variable.

we can access the structure members using -> when it was assigned to pointers

Syntax:
struct structure_name{
    datatype member_1;
    datatype member_2;
    .   .   .   .   .
    .   .   .   .   .
    datatype member_n;
};

struct structure_name struct_variable;
struct structure_name *ptr;

ptr = &struct_variable;     // pointer stores address of structure variable
ptr->member1;               // accessing structure member using arrow operator

*/

#include<stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s; 
    scanf("%d %s %f", &ptr->roll, ptr->name, &ptr->marks);
    printf("%d %s %.0f", ptr->roll, ptr->name, ptr->marks);

    // scanf("%d %s %f", &(*ptr).roll, (*ptr).name, &(*ptr).marks);
    // printf("%d %s %.0f", (*ptr).roll, (*ptr).name, (*ptr).marks);

    return 0;
}
