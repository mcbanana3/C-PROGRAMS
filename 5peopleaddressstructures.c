#include<stdio.h>
#include<string.h>

typedef struct Address
{
    int houseno;
    char block[10];
    char city[100];
    char state[100];
} add;


int main() {

    add a1;
    a1.houseno = 22;
    strcpy(a1.block, "A");
    strcpy(a1.city, "Nagpur");
    strcpy(a1.state, "Maharashtra");

    printf("The Address of 1st Person is : \n");
    
    printf("House No : %d \n", a1.houseno);
    printf("Block No : %s \n", a1.block);
    printf("City : %s \n", a1.city);
    printf("State : %d \n", a1.state);

    add a2;
    a2.houseno = 24;
    strcpy(a2.block, "B");
    strcpy(a2.city, "Guntur");
    strcpy(a2.state, "AP");

    printf("The Address of 2nd Person is : \n");
    
    printf("House No : %d \n", a2.houseno);
    printf("Block No : %s \n", a2.block);
    printf("City : %s \n", a2.city);
    printf("State : %d \n", a2.state);

    add a3;
    a3.houseno = 26;
    strcpy(a3.block, "D");
    strcpy(a3.city, "Bombay");
    strcpy(a3.state, "Maharashtra");

    printf("The Address of 3rd Person is : \n");
    
    printf("House No : %d \n", a3.houseno);
    printf("Block No : %s \n", a3.block);
    printf("City : %s \n", a3.city);
    printf("State : %d \n", a3.state);

    add a4;
    a4.houseno = 88;
    strcpy(a4.block, "Y");
    strcpy(a4.city, "Pune");
    strcpy(a4.state, "Maharashtra");

    printf("The Address of 4th Person is : \n");
    
    printf("House No : %d \n", a4.houseno);
    printf("Block No : %s \n", a4.block);
    printf("City : %s \n", a4.city);
    printf("State : %d \n", a4.state);

    add a5;
    a5.houseno = 29;
    strcpy(a5.block, "T");
    strcpy(a5.city, "Hyderabad");
    strcpy(a5.state, "Telangana");

    printf("The Address of 5th Person is : \n");
    
    printf("House No : %d \n", a5.houseno);
    printf("Block No : %s \n", a5.block);
    printf("City : %s \n", a5.city);
    printf("State : %d \n", a5.state);

    return 0;
}