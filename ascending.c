#include<stdio.h>

void sort_print_2(int a, int b);
void sort_print_3(int a, int b, int c);
void sort_print_4(int a, int b, int c, int d);

int main() {

    int a, b, c, d;

    printf("Enter a Number (A) : ");
    scanf("%d", &a);

    printf("Enter a Number (B) : ");
    scanf("%d", &b);

    printf("Enter a Number (C) : ");
    scanf("%d", &c);

    printf("Enter a Number (D) : ");
    scanf("%d", &d);

    printf("The Ascending Order is : \n");

    sort_print_4(a, b, c, d);

    return 0;
}

void sort_print_2(int a, int b) {
    if (a<=b)
    {
        printf("%d\n%d", a, b);
    }

    else {
        printf("%d\n%d\n", b, a);
    }
    
}

void sort_print_3(int a, int b, int c) {
    if (a<=b && a<=c)
    {
        printf("%d",a);
        sort_print_2(b, c);
    }

    else if (b<=a && b<=c)
    {
        printf("%d", b);
        sort_print_2(a, c);
    }

    else {
        printf("%d", c);
        sort_print_2(a, b);
    }
    
}

void sort_print_4(int a, int b, int c, int d) {
    if (a<=b && a<=c && a<=d)
    {
        printf("%d \n", a);
        sort_print_3(b, c, d);
    }

    else if (b<=a && b<=c && b<=d)
    {
        printf("%d \n", b);
        sort_print_3(a, c, d);
    }
    
    else if (c<=a && c<=b && c<=d)
    {
        printf("%d \n", c);
        sort_print_3(a, b, d);
    }

    else {
        printf("%d \n", d);
        sort_print_3(a, b, c);
    }

}