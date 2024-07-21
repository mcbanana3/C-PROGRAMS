#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;

    printf("Enter (N) : ");
    scanf("%d", &n);

    FILE * stars_file;

    stars_file = fopen("stars1.txt", "w");

    int nrows = (3 + (n - 2) * 2);

    char **stars = (char**)malloc(sizeof(char*)*nrows);

    for (int i = 0; i < nrows; i++)
    {
        stars[i] = (char*)malloc(sizeof(char)*nrows);

        for (int j = 0; j < nrows; j++)
        {
            stars[i][j] = ' ';
        }
    }

    for (int i = 0, j = n; i < n; i++, j--)
    {
        for (int k = 0; k < j; k++)
        {
            stars[i][k] = '*';
        }
    }

    for (int i = 0, j = n; i < n; i++, j--)
    {
        for (int k = ((2 * n) - 2), l = 0; l < j; k--, l++)
        {
            stars[i][k] = '*';
        }
    }

    for (int i = ((2 * n) - 2), j = n; j > 0; i--, j--)
    {
        for (int k = 0; k < j; k++)
        {
            stars[i][k] = '*';
        }
    }

    for (int i = (2 + (n - 2)* 2), j = n; j > 0; i--, j--)
    {
        for (int k = (2 + (n - 2)* 2), l = 0; l < j; k--, l++)
        {
            stars[i][k] = '*';
        }
    }
    
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < nrows; j++)
        {
            fprintf(stars_file, "%c ", stars[i][j]);
        }
        fprintf(stars_file, "\n");
    }

    fclose(stars_file);

    return 0;

}