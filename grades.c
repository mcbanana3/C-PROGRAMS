#include<stdio.h>

int main() {

    int Marks;
    printf("Enter Your Marks (0-100) : ");
    scanf("%d", &Marks);

    if (Marks < 30 ) {
        printf("Grade is 'C'");
    }

    else if (Marks >= 30 && Marks < 70) {
        printf("Grade is B");
    }

    else if (Marks >= 70 && Marks < 90) {
        printf("Grade is A");
    }

    else if (Marks >= 90 && Marks <= 100) {
        printf("Grade is A+");
    }

    else {
        printf("Invalid Marks");
    }
    
    return 0;

}