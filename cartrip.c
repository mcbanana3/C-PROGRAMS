#include <stdio.h>
#include <stdbool.h>

bool Calculate(int x);

int main() {

    int t;
    int x;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        Calculate(x);
    }

    return 0;
    
}

bool Calculate(int x) {

    if (x <= 300)
    {
       int ans = (300 * 10);
       return ans;
    }
    
    else if (x > 300)
    {
        int ans = (x * 10);
        return ans;
    }
    
}