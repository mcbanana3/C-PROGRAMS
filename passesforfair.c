#include<stdio.h>

int main() {

    int t;
    int n, k;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        
        if (n < k)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
    return 0;

}