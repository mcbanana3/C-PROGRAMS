#include<stdio.h>

int main(){

    int n,m,p,q;

    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);
    printf("Enter the value of p and q: ");
    scanf("%d %d", &p, &q);

    if(m == p){
        int matrix1[n][m], matrix2[p][q],result[n][q];

        printf("Enter the elements of Matrix 1 : \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements of Matrix 2 : \n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        printf("The result is : \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
        
    }

    else{
        printf("Multiplication of Matrices not possible\n");
    }
}