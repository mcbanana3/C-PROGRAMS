#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {

    struct student s1 = {1664, 92.5, "Aryan"};

    printf("student name = %s \n", s1.name);
    printf("Stdent Roll no  : %d \n", s1.roll);
    printf("Student CGPA : %f \n", s1.cgpa);

    struct student s2 = {2256, 98.2, "Avinash"};

    printf("student name = %s \n", s2.name);
    printf("Stdent Roll no  : %d \n", s2.roll);
    printf("Student CGPA : %f \n", s2.cgpa);

    struct student s3 = {2568, 89.9, "Manish"};

    printf("student name = %s \n", s3.name);
    printf("Stdent Roll no  : %d \n", s3.roll);
    printf("Student CGPA : %f \n", s3.cgpa);

    return 0;

}