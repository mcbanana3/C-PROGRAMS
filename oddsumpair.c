#include<stdio.h>

int main() {

    int t,a,b,c;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        if ((a + b) % 2 != 0 || (c + b) % 2 != 0 || (a+c) % 2 != 0)
        {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
        
    }
    
    return 0;

}