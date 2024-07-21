#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main() {

    struct student s1 = {1664, 98.2, "Aryan"};
    
    printInfo(s1);

    s1.roll = 1660;
    printf("Student Roll no : %d \n", s1.roll);

    return 0;

}

void printInfo(struct student s1) {
    printf("Student Information : \n");
    printf("student Name = %s \n", s1.name);
    printf("Student Roll no : %d \n", s1.roll);
    printf("Student CGPA : %f \n", s1.cgpa);
}