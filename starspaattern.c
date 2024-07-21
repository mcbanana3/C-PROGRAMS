#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {

    int n;

    FILE * star_file;

    printf("The Program Name is : %s\n", argv[0]);
    printf("%s %s\n", argv[1], argv[2]);

    star_file = fopen("stars.txt", "w");

    printf("Enter the number of Rows : ");
    scanf("%d", &n);

    printf("\n");

    int nrows = 5 + (n - 2)*4;
    int internal_nrows = 1 + (n - 2)*2;
 
    char **stars = (char**)malloc(sizeof(char*)*nrows);

    for (int i = 0; i < nrows; i++)
    {
        stars[i] = (char*)malloc(sizeof(char)*nrows);

        for (int j = 0; j < nrows; j++)
        {
            stars[i][j] = '*';
        }
    }

    for (int i = n; i <= (n + internal_nrows) - 1; i++)
    {
        for (int j = n; j <= (n + internal_nrows) - 1; j++)
        {
            stars[i][j] = *argv[1];
        }
    }

    for (int i = 0,j = (2+(n-2)*2),l = 0; l < n; i++, l++, j--)
    {
        for (int k = 0; k <= l; k++)
        {
            stars[i][j + (k * 2)] = *argv[2];
        }
    }

    for (int i = (4+(n-2)*4), j = (2+(n-2)*2), l = 0; l < n; l++, i--, j--)
    {
        for (int k = 0; k <= l; k++)
        {
            stars[i][j + (k * 2)] = *argv[2];
        }
    }

    for (int i = (2+(n-2)*2), j = 0, l = 0; l < n; i--, j++, l++)
    {
        for (int k = 0; k <= l; k++)
        {
            stars[i + (k * 2)][j] = *argv[2];
        }
    }

    for (int i = (2+(n-2)*2), j = (4+(n-2)*4), l = 0; l < n; l++, i--, j--)
    {
        for (int k = 0; k <= l; k++)
        {
            stars[i + (k * 2)][j] = *argv[2];
        }
        
    }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < nrows; j++)
        {
            fprintf(star_file, "%c ", stars[i][j]);
        }
        fprintf(star_file, "\n");
    }

    fclose(star_file);

    return 0;

}