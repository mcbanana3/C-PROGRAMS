#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float CGPA;
    char name[100];
};


int main() {

    struct student s1;
    s1.roll = 1558;
    s1.CGPA = 98.635;
    strcpy(s1.name, "Aryan");

    printf("Student Name : %s \n", s1.name);
    printf("Student Roll No : %d \n", s1.roll);
    printf("Student CGPA : %f \n", s1.CGPA);

    struct student s2;
    s2.roll = 1886;
    s2.CGPA = 95.25;
    strcpy(s2.name, "Avinash");

    printf("Student Name : %s \n", s2.name);
    printf("Student Roll No : %d \n", s2.roll);
    printf("Student CGPA : %f \n", s2.CGPA);

    struct student s3;
    s3.roll = 21669;
    s3.CGPA = 86.2654;
    strcpy(s3.name, "Manish");

    printf("Student Name : %s \n", s3.name);
    printf("Student Roll No : %d \n", s3.roll);
    printf("Student CGPA : %f \n", s3.CGPA);

    return 0;

}