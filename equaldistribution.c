#include <stdio.h>

int main(void) {
	
    int t;
    int a[1000];
    int b[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if ((a[i] + b[i]) % 2 == 0)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;
}