#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char Name[100];
    char DOB[100];
    char Gender[100];
    char no[100];
    char email[100];
}sDetails;

int main() {

    FILE *sfile;

    int sno;

    sfile = fopen("students1.txt", "r");

    fscanf(sfile, "%d \n", &sno);

    printf("The number of students are : %d \n", sno);

    sDetails* sDArray = (sDetails*)malloc(3*sizeof(sDetails));

    printf("\n");

    printf("The details of the first Student is : \n");

    printf("\n");

    fgets(sDArray[0].Name, 100, sfile);
    printf("%s", sDArray[0].Name);

    fgets(sDArray[0].DOB, 100, sfile);
    printf("%s", sDArray[0].DOB);

    fgets(sDArray[0].Gender, 100, sfile);
    printf("%s", sDArray[0].Gender);

    fgets(sDArray[0].no, 100, sfile);
    printf("%s", sDArray[0].no);

    fgets(sDArray[0].email, 100, sfile);
    printf("%s", sDArray[0].email);

    printf("\n");

    printf("The details of the Second Student is : \n");

    printf("\n");

    fgets(sDArray[1].Name, 100, sfile);
    printf("%s", sDArray[1].Name);

    fgets(sDArray[1].DOB, 100, sfile);
    printf("%s", sDArray[1].DOB);

    fgets(sDArray[1].Gender, 100, sfile);
    printf("%s", sDArray[1].Gender);

    fgets(sDArray[0].no, 100, sfile);
    printf("%s", sDArray[0].no);

    fgets(sDArray[1].email, 100, sfile);
    printf("%s", sDArray[1].email);

    printf("\n");

    printf("The details of the Third Student is : \n");

    printf("\n");

    fgets(sDArray[2].Name, 100, sfile);
    printf("%s", sDArray[2].Name);

    fgets(sDArray[2].DOB, 100, sfile);
    printf("%s", sDArray[2].DOB);

    fgets(sDArray[2].Gender, 100, sfile);
    printf("%s", sDArray[2].Gender);

    fgets(sDArray[0].no, 100, sfile);
    printf("%s", sDArray[0].no);

    fgets(sDArray[2].email, 100, sfile);
    printf("%s", sDArray[2].email);

    free(sDArray);

    return 0;

}