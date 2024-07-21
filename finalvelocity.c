#include<stdio.h>
#include<math.h>

int main() {

    int initial_velocity, acceleration, time;
    scanf("%d %d %d", &initial_velocity, &acceleration, &time);

    int final_velocity = initial_velocity + (acceleration * time);

    printf("%d\n", final_velocity);
    
    return 0;
    
}