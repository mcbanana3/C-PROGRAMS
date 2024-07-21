#include<stdio.h>

int main(){

    float rad = (1526.78/30.48);

    float area = 3.14 * (rad * rad);

    float total_cost = area * 8.75;

    printf("The total  cost is : %f\n", total_cost);

    return 0;
    
}