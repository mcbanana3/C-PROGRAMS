#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};


int main() {

    struct student s1;
        s1.roll = 1554;
        s1.cgpa = 95.85;
        strcpy(s1.name, "Aryan");

    printf("student name = %s \n", s1.name);
    printf("Stdent Roll no  : %d \n", s1.roll);
    printf("Student CGPA : %f", s1.cgpa);

    return 0;
    
}