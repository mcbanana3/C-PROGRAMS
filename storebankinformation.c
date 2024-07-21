#include<stdio.h>
#include<string.h>

typedef struct storebankinformation
{
    char Name[100];
    int accountno;
}ABC;

int main() {

    ABC a1;
    strcpy(a1.Name, "Aryan");
    a1.accountno = 59847154841564;

    printf("welcome to ABC Bank \n");

    printf("Account Holder Name : %s", a1.Name);
    printf("Account NO : %d", a1.accountno);

    return 0;
}
