#include<stdio.h>

int main() {

    int e, k, t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &e, &k);

        int energy = 0;

        while (e > 0)
        {
            e = e/k;
            energy++;
        }

        printf("%d\n", energy);

    }

    return 0;
    
}