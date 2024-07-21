#include<stdio.h>

int main() {

    int age;
    printf("Enter Age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("Adult \n");
        printf("They can Vote \n");
        printf("They can Drive \n");
    }

    else {
        printf("Not Adult \n");
        printf("They cannot Drive \n");
        printf("They cannot Vote \n");
    }

    printf("Thank You");
    
    return 0;
}