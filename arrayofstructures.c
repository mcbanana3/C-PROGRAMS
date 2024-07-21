#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float CGPA;
    char name[100];
};

int main() {

    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].CGPA = 92.25;
    strcpy(ece[0].name, "Aryan");

    printf("Student Name : %s \n", ece[0].name);
    printf("Student Roll No : %d \n", ece[0].roll);
    printf("Student CGPA : %f \n", ece[0].CGPA);

    return 0;

}