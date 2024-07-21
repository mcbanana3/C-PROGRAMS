#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("Students.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter your Name : ");
    scanf("%s", &name);

    printf("Enter your Age : ");
    scanf("%d", &age);

    printf("Enter your CGPA : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s \t", name);
    fprintf(fptr, "%d \t", age);
    fprintf(fptr, "%f \t", cgpa);

    fclose(fptr);

    return 0;

}