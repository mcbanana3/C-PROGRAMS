#include <stdio.h>
#include <stdbool.h>

bool Calculate(int x, int y);

int main() {

    int t;
    int x;
    int y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if (Calculate(x, y) == true)
        {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
        
    }

    return 0;
    
}

bool Calculate(int x, int y) {

    if ((x * 5) > y)
    {
        return true;
    }

    else {
        return false;
    }
    
}