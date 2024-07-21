#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int nrows, ncolums;

    printf("Enter Order : ");
    scanf("%d %d", &nrows, &ncolums);

    int** element = (int**)malloc((nrows)*sizeof(int*));

    for (int i = 0; i < nrows; i++)
    {
        element[i] = (int*)malloc((ncolums)*sizeof(int));
    }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolums; j++)
        {
            scanf("%d", &element[i][j]);
        }
    }

    printf("The Matrix is : \n");
    
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolums; j++)
        {
            printf("%d\t", element[i][j]);
        }
        printf("\n");
    }

    return 0;

}