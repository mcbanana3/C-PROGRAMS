#include<stdio.h>

int main() {

    int Weight;
    printf("Enter Your Weight : ");
    scanf("%d", &Weight);

    if (Weight <= 5) {
        printf("Newborn");
    }

    else if (Weight > 5 && Weight < 40) {
        printf("Average");
    }
    
    else if (Weight > 40 && Weight < 70 ){
        printf("Adult");
    }

    else {
        printf("Overweight");
    }

    return 0;
    
}