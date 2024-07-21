#include<stdio.h>

int sum(int a, int b);

int main() {

    int a, b;
    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    int s = sum(a, b);

    printf("The sum is %d", s);

    printTable(n); //Actual Parameter

    return 0;

}

int sum(int x, int y) {

    return x + y;
}

void printTable(int n) { //Formal Parameter

    for (int i = 1; i <= 10; i++) {
        printf("%d", i*n);
    }
    
}