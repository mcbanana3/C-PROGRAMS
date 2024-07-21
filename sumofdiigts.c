#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, r;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i <= 5; i++)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    
    printf("%d", sum);
    
    return 0;
}