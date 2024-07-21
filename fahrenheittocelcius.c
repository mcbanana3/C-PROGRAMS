#include<stdio.h>

//Fahrenheit to Celcius Converter

float ConvertTemp(float fahrenheit);

int main() {

    int fahrenheit;
    printf("Enter a degree in (C) : ");
    scanf("%d", &fahrenheit);

    printf("Celcius in Fahrenheit is : %f", ConvertTemp(fahrenheit));

    return 0;

}

float ConvertTemp(float fahrenheit) {

    int celcius = (fahrenheit - 32) * 5/9;
    return celcius;
    
}