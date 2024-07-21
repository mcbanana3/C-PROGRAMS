#include <stdio.h>

int main(void) {
	
    int t;
    int x[1000];
    int h[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &x[i], &h[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        if (x[i] >= h[i])
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }
        
    }
    
	return 0;

}
