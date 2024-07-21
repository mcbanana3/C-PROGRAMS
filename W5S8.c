#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int a, b;

    scanf("%d %d", &b, &a);

    int result = ceil((double)(2 * a)/(double)b);

    printf("%d", result);

    return 0;
}