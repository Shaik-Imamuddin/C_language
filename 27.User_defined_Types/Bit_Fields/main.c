/*

Bit fields are used inside structures to store data by using less memory 
instead of using full memory size.

it helps in saving memory and Storing data with limited range

it allows the following datatypes int, unsigned int

struct structure_name {
    data_type member_name : number_of_bits;
};



*/

#include <stdio.h>

struct Student {
    unsigned int age : 6;      // age needs only small bits (0–63 is enough)
    unsigned int grade : 4;    // grade from 0–15
    unsigned int section : 2;  // 00,01,10,11 (max 4 sections)
};

int main() {
    struct Student s;
    unsigned int a, g, sec;
    scanf("%u %u %u",&a,&g,&sec);

    s.age = a;
    s.grade = g;
    s.section = sec;

    printf("%u %u %u",s.age,s.grade,s.section);

    return 0;
}


//it will print the value if the input with in the range 
//if the input is exceded the range it will returns input%range