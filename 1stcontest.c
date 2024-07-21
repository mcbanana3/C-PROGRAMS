#include <stdio.h>

int main() {

    int N[1000];
    int A[1000];
    int B[1000];
    int num1[1000];
    int num2[1000];

    printf("");
    scanf("%d %d %d", &N[0], &A[0], &B[0]);

    num1[0] = N[0] - A[0];
    num2[0] = num1[0] - B[0];

    printf("%d %d", num1[0], num2[0]);

	return 0;
}