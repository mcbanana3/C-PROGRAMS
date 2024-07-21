#include<stdio.h>

int main() {

    int t;
    int a[100];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] <= 10)
        {
            printf("Yes \n");
        }

        else {
            printf("No \n");
        }
        
    }
    
    return 0;

}