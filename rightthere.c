#include <stdio.h>

int main(void) {
	
    int t;
    int n[1000];
    int x[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &n[i], &x[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (n[i] <= x[i])
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;
}