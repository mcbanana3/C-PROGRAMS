#include<stdio.h>

struct book{
    char title[50];
    char author[50];
    char status[20];
};

int main(){

    struct book b[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Title, Author, Availability Status : ");
        scanf("%s %s %s", &b[i].title, &b[i].author, &b[i].status);
    }

    printf("The books in Library Are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Details of Book %d : \n", i+1);
        printf("Title : %s\nAuthor : %s\nAvailability Status : %s\n", b[i].title, b[i].author, b[i].status);
    }

    return 0;
    
}