#include<stdio.h>

int main() {

    int a[3][3];
    int i, j;
    float deter = 0;

    printf("Enter the elements of Matrix (A) : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("The Matrix (A) is : \n");
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d \t", a[i][j]);
            }
            printf("\n");
        }

    for (int i = 0; i < 3; i++)
    {
        deter = a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    }

    printf("The Determinant is : %f \n", deter);

    if (deter == 0)
    {
        printf("the inverse does not exist");
    }
    
    else {

        float ainv[3][3];

    ainv[0][0]= (a[1][1]*a[2][2]-a[2][1]*a[1][2])/deter;
    ainv[0][1]= (-1*a[0][1]*a[2][2]+a[2][1]*a[0][2])/deter;
    ainv[0][2]= (a[0][1]*a[1][2]-a[1][1]*a[0][2])/deter;
    ainv[1][0]= (-1*a[1][0]*a[2][1]+a[2][0]*a[1][2])/deter;
    ainv[1][1]= (a[0][0]*a[2][2]-a[2][0]*a[0][2])/deter;
    ainv[1][2]= (-1*a[0][0]*a[1][2]+a[1][0]*a[0][2])/deter;
    ainv[2][0]= (a[1][0]*a[2][1]-a[2][0]*a[1][1])/deter;
    ainv[2][1]= (-1*a[0][0]*a[2][1]+a[2][0]*a[0][1])/deter;
    ainv[2][2]= (a[0][0]*a[1][1]-a[1][0]*a[0][1])/deter;

   printf("\nInverse of matrix is: \n\n");
   for(i=0;i<3;i++)
   {
    for (int j = 0; j < 3; j++)
    {
        printf("%f \t", ainv[i][j]);
    }

    printf("\n");
    
   }

    }

    return 0;

}
    
    