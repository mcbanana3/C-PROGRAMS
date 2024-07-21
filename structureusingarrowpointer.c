#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {

    struct student s1 = {1664, 98.2, "Aryan"};
    printf("student Name = %s \n", s1.name);
    printf("Student Roll no  : %d \n", s1.roll);
    printf("Student CGPA : %f \n", s1.cgpa);

    struct student *ptr = &s1;
    printf("student name = %s \n", (*ptr).name);
    printf("Stdent Roll no  : %d \n", (*ptr).roll);
    printf("Student CGPA : %f \n", (*ptr).cgpa);
    printf("student->name with ptr = %s \n", ptr->name);
    printf("Student->Roll no with pointer : %d \n", ptr->roll);
    printf("Student->CGPA with pointer : %f \n", ptr->cgpa);

    return 0;

}