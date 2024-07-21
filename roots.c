#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int d = pow(b,2) - (4*a*c);

    if(d > 0){
        float r1 = (-b + sqrt(d))/2*a;
        float r2 = (-b - sqrt(d))/2*a;
        printf("The roots are unequal and r1 is %f and r2 is %f\n", r1, r2);
    }

    else if(d == 0){
        float r1 = (-b + sqrt(d))/2*a;
        float r2 = (-b - sqrt(d))/2*a;
        printf("The roots are real and equal and r1 is %f and r2 is %f\n", r1, r2);
    }

    else{
        float r1 = (-b + sqrt(d))/2*a;
        float r2 = (-b - sqrt(d))/2*a;
        printf("The roots are imaginary and unqual and r1 is %f and r2 is %f\n", r1, r2);
    }

    return 0;
    
}