#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    FILE * ptr;
    ptr = fopen("note.txt", "w");

    if(ptr == NULL){
        printf("File is not There\n");
        fclose(ptr);
        exit;
    }

    else{
        char name[50];
        int roll_no;
        int marks;

        printf("Enter Name, Roll No, Marks : ");
        scanf("%s %d %d", name, &roll_no,&marks);

        fprintf(ptr, "Name : %s\nRoll No : %d\nMarks : %d\n", name, roll_no, marks);
        fclose(ptr);
    }

    return 0;
}