#include<stdio.h>

int main(){

    int rows, col;

    printf("Enter the number of Rows : \n");
    scanf("%d", &rows);

    printf("Enter the number of columns : \n");
    scanf("%d", &col);

    int matrix[rows][col];

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

    int min_array[rows];
    int sum_rows[rows];

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        int min = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + matrix[i][j];
            if(matrix[i][j] > min){
                min = matrix[i][j];
            }
        }
        min_array[i] = min;
        sum_rows[i] = sum;
    }

    int max = sum_rows[0], index = 0;
    for (int i = 0; i < rows; i++)
    {
        if (sum_rows[i] > max)
        {
            max = sum_rows[i];
            index = i;
        }
    }

    printf("The max value in rows are : \n");
    for(int i = 0; i < rows; i++){
        printf("The Max in Row %d is : %d\n", i+1, min_array[i]);
    }

    printf("The maximum row with sum is row %d and value : %d\n", index+1, max);

    return 0;
}