#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    
    scanf("%d", &n);
    
    int **arr;
    
    arr = (int**)malloc(sizeof(int*)*(2*n-1));
  	
    for(int i = 0; i < (2*n - 1); i++) {
        arr[i] = (int*)malloc(sizeof(int)*(2*n-1));
    }
    
    for (int i = 0, j = 0; n > 0; n--, j++, i++) {
        for (int k = 0; k < (2*n-1); k++) {
            for (int l = 0; l < (2*n-1); l++) {
                arr[i + k][j + l] = n;
            }
        }
    }
    
    for(int i = 0; i < (2*n - 1); i++) {
        for(int j = 0; j < (2*n - 1); j++) {
            printf("%d", arr[i][j]);
        }
    }
    
    return 0;
}
