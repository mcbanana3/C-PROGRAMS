#include<stdio.h>

//Celcius to Fahrenheit Converter

float ConvertTemp(float celcius);

int main() {

    int celcius;
    printf("Enter a degree in (C) : ");
    scanf("%d", &celcius);

    printf("Celcius in Fahrenheit is : %f", ConvertTemp(celcius));

    return 0;

}

float ConvertTemp(float celcius) {

    int far = (celcius * 9/5) + 32;

    return far;
}