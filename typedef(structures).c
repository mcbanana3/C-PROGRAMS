#include<stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} cse;

int main() {

    cse s1;
    s1.roll = 1665;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Aryan");

    printf("Student Roll No : %d \n", s1.roll);
    printf("Student Name : %s \n", s1.name);
    printf("Student CGPA : %f \n", s1.cgpa);

    return 0;

}