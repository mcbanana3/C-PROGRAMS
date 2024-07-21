#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;

    FILE * stars_file;

    stars_file = fopen("stars1.txt", "w");

    printf("Enter (N) : ");
    scanf("%d", &n);

    n = n + 1;
    
    int nrows = (2 + (n - 2));
    int ncolums = (2*n - 1);

    char **stars = (char**)malloc(sizeof(char*)*(nrows*n));

    for (int i = 0; i < nrows; i++)
    {
        stars[i] = (char*)malloc(sizeof(char)*(ncolums*n));

        for (int j = 0; j < ncolums; j++)                   
        {
            stars[i][j] = ' ';
        }
    }

    for (int i = 0,j = (2 + (n - 2)*1),l = 0; l < n; i++, l++, j--)
    {
        for (int k = 0; k < l; k++)
        {
            stars[i][j + (k * 2)] = '*';
        }
    }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolums; j++)
        {
            fprintf(stars_file, "%c", stars[i][j]);
        }
    fprintf(stars_file, "\n");
    }
    
    return 0;

}