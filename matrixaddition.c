#include<stdio.h>

int main(){

    int n,m;

    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);

    int matrix1[n][m], matrix2[n][m], result[n][m];

    printf("Enter elements of Matrix 1 : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 1 : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The Resultant Matrix is : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}