#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int lefttoright = 0, righttoleft = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        lefttoright = lefttoright + matrix[i][i];
    }

    for (int i = 0; i < n; i++)
    {
        righttoleft = righttoleft  + matrix[i][n-i-1];
    }
    
    int ans = abs(lefttoright - righttoleft);

    printf("%d", ans);

    return 0;
    
}