#include<stdio.h>

int main() {

    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j, k ,choice;

    printf("Enter the order of First Matrix : \n");
    scanf("%d %d", &m, &n);

    printf("Enter the order of Second Martix : \n");
    scanf("%d %d", &p, &q);

    printf("The Order is : %d %d \n", m, n);

    printf("The Order is : %d %d \n", p, q);

    printf("Enter the elements of Matrix (A) : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Enter the elements of Matrix (B) : ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    
    printf("The Matrix (B) is : \n");
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d \t", a[i][j]);
            }
            printf("\n");
        }

    printf("The Matrix (B) is : \n");
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d \t", b[i][j]);
            }
            printf("\n");
        }

    printf("Press Numbers (1 for (+), (2 for (-)), (3 for (*))) : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (m == p && n == q)
        {
           for(i = 0; i < m; i++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }
        }

        printf("The Addition is : \n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++) {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    }

    if (choice == 2)
    {
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }
        
        printf("The subtraction is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    }
    
    if (choice == 3)
    {
        if (n != p)
        {
            printf("This is not a Valid Matrix");
            return 0;
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
        
        printf("The Multiplication is : \n");
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

    
