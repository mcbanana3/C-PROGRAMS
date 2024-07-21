# include<stdio.h>

int main() {
    
    float a, b, c;

    printf("Enter a Number (A) : ");
    scanf("%f", &a);

    printf("Enter a Number (B) : ");
    scanf("%f", &b);

    printf("Enter a Number (C) : ");
    scanf("%f", &c);

    printf("The average is : %f", (a + b + c) / 3);

    return 0;
}