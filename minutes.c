#include<stdio.h>
#include<math.h>

int main() {

    int hours, minutes;
    scanf("%d %d", &hours, &minutes);

    int minutes_total = (hours * 60) + minutes;

    printf("%d\n", minutes_total);
    
    return 0;
    
}