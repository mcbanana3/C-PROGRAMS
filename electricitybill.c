#include<stdio.h>

int main(){

    int units;
    float total_cost;
    printf("Enter the Units : ");
    scanf("%d", &units);

    if(units >= 1 && units <= 100){
        total_cost = 0;
    }

    else if(units > 100 && units <= 200){
        total_cost = units * 5;
        total_cost = total_cost + (total_cost * 0.18);
    }

    else if(units > 200 && units <= 500){
        total_cost = units * 8;
        total_cost = total_cost + (total_cost * 0.18); 
    }

    else if(units > 500){
        total_cost = units * 10;
        total_cost = total_cost + (total_cost * 0.18);
    } 

    printf("The total Cost for %d units is : %f", units, total_cost);   

    return 0;
}