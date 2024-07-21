#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct matrix_structure
{
    int nrows;
    int ncolums;
    int **elements;
}matrix;

int main() {

    int choice;
    int matrix1, matrix2;

    FILE *mfile;

    mfile = fopen("matrix.txt", "r");

    int num_matrices;

    fscanf(mfile, "%d", &num_matrices);
    printf("The Number of Matrix are : %d\n", num_matrices);

    matrix* matrixArray = (matrix*)malloc(num_matrices*sizeof(matrix));

    for (int i = 0; i < num_matrices; i++)
    {
        fscanf(mfile, "%d %d", &matrixArray[i].nrows, &matrixArray[i].ncolums);

        matrixArray[i].elements = (int**)malloc(sizeof(int*)*matrixArray[i].nrows);

        for (int j = 0; j < matrixArray[i].nrows; j++)
        {
            matrixArray[i].elements[j] = (int*)malloc(sizeof(int)*matrixArray[i].ncolums);
        }

        for (int k = 0; k < matrixArray[i].nrows; k++)
        {
            for (int l = 0; l < matrixArray[i].ncolums; l++)
            {
                fscanf(mfile, "%d", &matrixArray[i].elements[k][l]);
            }
        }
    }

    for (int i = 0; i < num_matrices; i++)
    {
        printf("The Order of Matrix is : %d * %d\n", matrixArray[i].nrows, matrixArray[i].ncolums);
        printf("The Matrix is : \n");
        for (int j = 0; j < matrixArray[i].nrows; j++)
        {
            for (int k = 0; k < matrixArray[i].ncolums; k++)
            {
                printf("%d\t", matrixArray[i].elements[j][k]);
            }
        printf("\n");
        }
    }

    printf("Press Numbers (1 for (+), (2 for (-)) : ");
    scanf("%d", &choice);

    printf("Which Matrix to do the Operation : ");
    scanf("%d %d", &matrix1, &matrix2);

    matrix add_result;

    if (choice == 1)
    {
        if (matrixArray[matrix1-1].nrows == matrixArray[matrix2-1].nrows && matrixArray[matrix1-1].ncolums == matrixArray[matrix2-1].ncolums)
        {
            add_result.elements = (int**)malloc(sizeof(int*)*matrixArray[matrix1-1].nrows);

            for (int i = 0; i < matrixArray[matrix1-1].nrows; i++)
            {
                add_result.elements[i] = (int*)malloc(sizeof(int)*matrixArray[matrix1-1].ncolums);
            }

            for (int i = 0; i < matrixArray[matrix1-1].nrows; i++)
            {
                for (int j = 0; j < matrixArray[matrix1-1].ncolums; j++)
                {
                    add_result.elements[i][j] = matrixArray[i].elements[i][j] + matrixArray[i].elements[i][j];
                    printf("%d\t", add_result.elements[i][j]);
                }
                printf("\n");
            }
        }

        else {
            printf("Cannot Complete Sum of the Matrices because the order is not same\n");
        }

    }

    matrix sub_result;

    if (choice == 2)
    {
        if (matrixArray[matrix1-1].nrows == matrixArray[matrix2-1].nrows && matrixArray[matrix1-1].ncolums == matrixArray[matrix2-1].ncolums)
        {
            sub_result.elements = (int**)malloc(sizeof(int*)*matrixArray[matrix1-1].nrows);

            for (int i = 0; i < matrixArray[matrix1-1].nrows; i++)
            {
                sub_result.elements[i] = (int*)malloc(sizeof(int)*matrixArray[matrix1-1].ncolums);
            }

            for (int i = 0; i < matrixArray[matrix1-1].nrows; i++)
            {
                for (int j = 0; j < matrixArray[matrix1-1].ncolums; j++)
                {
                    sub_result.elements[i][j] = matrixArray[i].elements[i][j] - matrixArray[i].elements[i][j];
                    printf("%d\t", sub_result.elements[i][j]);
                }
                printf("\n");
            }

        }

        else {
            printf("Cannot Subtract the Matrices because the order is not same\n");
        }
        
    }

    free(matrixArray);

    fclose(mfile);

    return 0;

}