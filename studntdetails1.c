#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_details
{
    int rollno;
    char name[50];
    char email[30];
    char gender[10];
    char stream[5];
}student;

int main() {

    int student_no;

    FILE * students2;

    students2 = fopen("students2.txt", "r");

    fscanf(students2, "%d \n", &student_no);

    printf("The number of students are : %d \n", student_no);

    student* student_details_Array = (student*)malloc(sizeof(student)*student_no);

    for (int i = 0; i < student_no; i++)
    {
        fscanf(students2, "%d\n", &student_details_Array[i].rollno);

        fgets(student_details_Array[i].name, 100, students2);
        student_details_Array[i].name[strlen(student_details_Array[i].name)-1]='\0';

        fgets(student_details_Array[i].email, 100, students2);
        student_details_Array[i].email[strlen(student_details_Array[i].email)-1]='\0';

        fgets(student_details_Array[i].gender, 100, students2);
        student_details_Array[i].gender[strlen(student_details_Array[i].gender)-1]='\0';

        fgets(student_details_Array[i].stream, 100, students2);
    }

    for (int i = 0; i < student_no; i++)
    {
        printf("%d\n", student_details_Array[i].rollno);
        printf("%s\n", student_details_Array[i].name);
        printf("%s\n", student_details_Array[i].email);
        printf("%s\n", student_details_Array[i].gender);
        printf("%s\n", student_details_Array[i].stream);
    }

    return 0;

}