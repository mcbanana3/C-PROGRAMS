#include <stdio.h>

int main() {
	
    int t;
    int alice[200];
    int bob[200];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &alice[i], &bob[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (alice[i] > bob[i])
        {
            printf("A \n");
        }

        else {
            printf("B \n");
        }
        
    }
    

	return 0;
}