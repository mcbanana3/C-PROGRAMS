#include<stdio.h>

int main() {
	
    int t;
    int x[100000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (x[i] >= 67 && x[i] <= 45000)
        {
            printf("YES \n");
        }

        else {
            printf("NO \n");
        }

    }

	return 0;
}