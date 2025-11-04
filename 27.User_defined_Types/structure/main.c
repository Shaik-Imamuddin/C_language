/*
structure is used to store the collection of different type of data elements.

to create a structure we need to use a keyword called struct follwed by structure_name.

each variable inside a structure is also known as member of a structure.

each member gets its own(separate) memory space along with possible padding.

to access the members of a structure we need to use the dot(.) operator.

Syntax declaration of a structure

struct structure_name{
    datatype member_1;
    datatype member_2;
    .   .   .   .   .
    .   .   .   .   .
    datatype member_n;
};

syntax for Accessing structure members.

structure_variable.member_name;

*/

#include<stdio.h>

struct Student{
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct Student s;
    scanf("%d %s %f",&s.roll,s.name,&s.marks);
    printf("%d %s %.0f",s.roll,s.name,s.marks);
    return 0;
}

// Using Typedef with structure


/*
#include<stdio.h>

typedef struct{
    int roll;
    char name[20];
    float marks;
}Student;

int main(){
    Student s;
    scanf("%d %s %f",&s.roll,s.name,&s.marks);
    printf("%d %s %.0f",s.roll,s.name,s.marks);
    return 0;
}
*/