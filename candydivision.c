#include <stdio.h>

int main(void) {
	
    int t;
    int N[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &N[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (N[i] % 3 == 0)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
        
    }
    
	return 0;
}