#include<stdio.h>
#include<math.h>

int main(){
    
    float w, h;

    scanf("%f %f", &w, &h);

    float bmi = w/pow(h,2);

    printf("%.2f", bmi);

    return 0;
}