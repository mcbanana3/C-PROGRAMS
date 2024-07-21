#include<stdio.h>

int main() {

    int x[1000];
    int y[1000];

    printf("");
    scanf("%d %d", &x[0], &y[0]);

    int answer = x[0] - y[0];

    printf("%d", answer);

    return 0;

}