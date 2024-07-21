#include<stdio.h>

//This is code to tell if we have passed or failed in our exams.

int main() {

    int marks;
    printf("Enter your marks (0-100) : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30) {
        printf("Fail \n");
    }

    else if (marks > 30 && marks <= 100) {
        printf("Pass \n");
    }
    
     else {
        printf("Wrong Marks \n");
    }

    return 0;
    
}