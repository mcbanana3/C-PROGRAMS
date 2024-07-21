#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {

    int x, y;

    printf("Enter the value of (A) : ");
    scanf("%d", &x);

    printf("Enter the value of (B) : ");
    scanf("%d", &y);

    swap(x, y);

    printf("x = %d & y = %d \n", x, y);

    _swap(&x, &y);
    printf("x = %d & y = %d \n", x, y);

    return 0;

}

void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;

    printf("a = %d & b = %d \n", a,b);
}

void _swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    c = *b;
}