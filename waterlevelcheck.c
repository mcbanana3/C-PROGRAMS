#include<stdio.h>

int main() {

    int water_level, optimal_level;

    scanf("%d %d", &water_level, &optimal_level);

    if (water_level < optimal_level)
    {
        printf("Water Level Low");
    }

    return 0;

}