#include <stdio.h>

int main() {

    int t;
    int x[4000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (x[i] >=2000)
        {
            printf("Yes \n");
        }

        else {
            printf("No \n");
        }
        
    }

	return 0;
}