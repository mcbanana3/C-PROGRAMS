#include<stdio.h>

int main(){

    int m,n;

    printf("Enter the Rows of Matrix 1 : ");
    scanf("%d", &m);

    printf("Enter the Columns of Matrix 1 : ");
    scanf("%d", &n);

    int p,q;

    printf("Enter the Rows of Matrix 2 : ");
    scanf("%d", &p);

    printf("Enter the Columns of Matrix 2 : ");
    scanf("%d", &q);

    if(n == p){
        int matrix1[m][n], matrix2[p][q], product[n][p];

        printf("Enter the Elements of Matrix 1 : ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the Elements of Matrix 2 : ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                product[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        printf("The Product Matrix is : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
        
    }

    else{
        printf("Invalid! Cant perform Multiplication\n");
    }
    
}