#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    int array[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &array[i][j]);
        }
    }

    int lefttoright = 0, righttoleft = 0;

    for(int i = 0; i < n; i++){
        lefttoright = lefttoright + array[i][i];
    }

    for(int i = 0; i < n; i++){
        righttoleft = righttoleft + array[i][n-i-1];
    }

    int ans = abs(lefttoright - righttoleft);

    printf("The diagonal difference is %d\n", ans);

    return 0;
}