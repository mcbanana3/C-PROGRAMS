#include <stdio.h>

int main(void) {
	
    int t;
    int n[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
        
    }
    
	return 0;
}