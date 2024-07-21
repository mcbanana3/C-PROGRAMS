#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

    fscanf(sfile, "%d\n", &sno);

    printf("The number of students are : %d \n", sno);

    sDetails* sDArray = (sDetails*)malloc(sno*sizeof(sDetails));

    for (int i = 0; i < sno; i++)
    {
        fgets(sDArray[i].Name, 100, sfile);
        sDArray[i].Name[strlen(sDArray[i].Name)-1]='\0';

        fgets(sDArray[i].DOB, 100, sfile);
        sDArray[i].DOB[strlen(sDArray[i].DOB)-1]='\0';

        fgets(sDArray[i].Gender, 100, sfile);
        sDArray[i].Gender[strlen(sDArray[i].Gender)-1]='\0';

        fgets(sDArray[i].no, 100, sfile);
        sDArray[i].no[strlen(sDArray[i].no)-1]='\0';

        fgets(sDArray[i].email, 100, sfile);
        sDArray[i].email[strlen(sDArray[i].email)-1]='\0';

    }
    
    for (int i = 0; i < sno; i++)
    {
        printf("%s\n", sDArray[i].Name);
        printf("%s\n", sDArray[i].DOB);
        printf("%s\n", sDArray[i].Gender);
        printf("%s\n", sDArray[i].no);
        printf("%s\n", sDArray[i].email);
    }
    

    return 0;

}