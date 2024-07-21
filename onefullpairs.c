#include <stdio.h>
#include <stdbool.h>

bool Calculate(int a, int b);

int main() {

    int t;
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if (Calculate(a, b) ) {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

    return 0;
    
}

bool Calculate(int a, int b) {

    if ((a + b) + (a * b) == 111)
    {
        return true;
    }

    else if ((a + b) + (a * b) != 111)
    {
        return false;
    }
    
}