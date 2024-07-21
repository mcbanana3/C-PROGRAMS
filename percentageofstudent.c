#include<stdio.h>

float studentpercent(float s, float m, float S);

int main() {
    
    float s, m, S;

    printf("Enter your Marks in Science : ");
    scanf("%f", &s);

    printf("Enter your Marks in Maths : ");
    scanf("%f", &m);

    printf("Enter your Marks in Sanskrit : ");
    scanf("%f", &S);

    printf("Total Percentage is : %f", studentpercent(s, m, S));

    return 0;
}

float studentpercent(float s, float m, float S) {
    return ((s + m + S)/3);
}