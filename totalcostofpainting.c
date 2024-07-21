#include<stdio.h>

int main() {

    int leng, width, height;

    scanf("%d %d %d", &leng, &width, &height);
    
    int LSA = 2*(leng + width)*height;
    int total_cost = LSA * 20;

    printf("%d\n", total_cost);

    return 0;
    
}