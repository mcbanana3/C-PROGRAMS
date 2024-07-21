#include<stdio.h>

int main(){

    double rad, vol;

    scanf("%lf", &rad);

    vol = ((4/3) * 3.14 * (rad*rad*rad));

    printf("%.2lf", vol);
    
    return 0;
    
}