#include<stdio.h>
#include<math.h>

int main() {

    int weight, hieght;
    float bmi;

    scanf("%d%d", &weight, &hieght);

    weight = weight * 0.45359237;
    hieght = hieght * 0.0254;

    bmi = weight/(pow(hieght, 2));

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }

    else if (bmi >= 18.5 && bmi < 25.0)
    {
        printf("Normal\n");
    }

    else if (bmi >= 25.0 && bmi < 30.0)
    {
        printf("Overweight\n");
    }
    
    else if (bmi >= 30.0)
    {
        printf("Obese\n");
    }

    return 0;
    
}