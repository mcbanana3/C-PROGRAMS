#include<stdio.h>

int main() {

    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q,  i, j, k;

    printf("Enter the order of First Matrix : \n");
    scanf("%d %d", &m, &n);

    printf("Enter the order of Second Martix : \n");
    scanf("%d %d", &p, &q);

    if (n != p )
    {
        printf("This is not a Valid Matrix");
        return 0;
    }

    else {
        printf("Enter the elements of Matrix (A) : \n");
        for (int i = 0; i < m; i++)
        {
           for (int j = 0; j < n; j++)
           {
            scanf("%d", &a[i][j]);
           }
            
        }

        printf("Enter the elements of Matrix (B) : \n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
            
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
            
        }

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", b[i][j]);
            }

            printf("\n");
            

        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                
            }
            
        }

        printf("The Product of the Matrices is : \n");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d \t", c[i][j]);
            }
            printf("\n");
            
        }
        
    }

    return 0;


}