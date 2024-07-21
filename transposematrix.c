#include <stdio.h>

int main() {

    int rows, col;

    printf("Enter the number of Rows : \n");
    scanf("%d", &rows);

    printf("Enter the number of columns : \n");
    scanf("%d", &col);

    int matrix[rows][col];
    int transpose[col][rows];

    printf("Enter the elements of Matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The elements of Matrix are : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose of the Matrix is : \n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[j][i] = matrix[j][i];
        }

        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[j][i]);
        }
        
        printf("\n");
    }

    return 0;
}