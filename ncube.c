# include<stdio.h>

int main() {
    int Number;
    
    printf("Insert a Number form 1 to 100 ");
    scanf("%d", &Number);

    printf("The cube root of the Number is : %d", Number * Number * Number);

    return 0;
}