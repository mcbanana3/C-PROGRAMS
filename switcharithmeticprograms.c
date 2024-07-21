#include<stdio.h>

int main(){

    int a, b, ans;
    char symbol;

    scanf("%d%c%d", &a, &symbol, &b);

    switch (symbol)
    {
    case '+':
        ans = a + b;
        break;
    
    case '-':
        ans = a - b;
        break;

    case '*':
        ans = a * b;
        break;

    case '/':
        ans = a / b;
        break;

    default:
        printf("Invalid Symbol\n");
        break;
    }

    printf("%d", ans);

    return 0;
    
}