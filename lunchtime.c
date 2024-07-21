#include<stdio.h>

int main() {
    
    int t;
    int x;

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        
        if (x >= 1 && x <= 4)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");;
        }
        
    }

    return 0;
    
}