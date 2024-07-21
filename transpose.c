#include<stdio.h>

int main(){

    int m,n;

    printf("Enter the Rows of Matrix 1 : ");
    scanf("%d", &m);

    printf("Enter the Columns of Matrix 1 : ");
    scanf("%d", &n);

    int matrix1[m][n];

    printf("Enter the Elements of Matrix 1 : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("The Original Matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    int transpose[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix1[i][j];
        }
    }

    printf("The Transposed Matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;

}