#include<stdio.h>

void printTable(int n);

int main() {

    int n;

    printf("Enter a Number (N) : ");
    scanf("%d", &n);

    printTable(n); //Actual Parameter

    return 0;

}

void printTable(int n) { //Formal Parameter

    for (int i = 1; i <= 10; i++) {
        printf("%d \n", i*n);
    }
    
}