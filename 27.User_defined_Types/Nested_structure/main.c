/*

A nested structure means having one structure inside another structure.

struct OuterStructure {
    datatype member_1;
    datatype member_2;
    .   .   .   .   .
    .   .   .   .   .
    datatype member_n;

    struct InnerStructure {     // Nested Structure
        datatype inner_member_1;
        datatype inner_member_2;
        .   .   .   .   .
        .   .   .   .   .
        datatype inner_member_m;
    } inner_var;
};


Example:

struct Student {
    int roll;
    char name[20];

    struct Address {
        char city[20];
        int pincode;
    } addr;
};


*/

#include <stdio.h>

struct Student {
    int roll;
    char name[20];

    struct Address {
        char city[20];
        int pincode;
    } addr;
};

int main() {
    struct Student s;

    scanf("%d %s %s %d", &s.roll,s.name,s.addr.city,&s.addr.pincode);
    printf("%d %s %s %d",s.roll,s.name,s.addr.city,s.addr.pincode);

    return 0;
}