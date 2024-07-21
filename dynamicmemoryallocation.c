#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;
    float *pttr;
    int n;

    ptr = (int*) malloc(5*sizeof(int));
    pttr = (float*) malloc(50*sizeof(float));

    printf("Enter (N) : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (n % 2 !=0)
        {
            printf("%d", n);
        }
        
    }

    free(ptr);
    free(pttr);
    
    printf("%d", ptr);

    realloc(ptr, 500);

    for (int i = 0; i < 520; i++)
    {
        printf("%d", ptr);
    }
    

    return 0;
        
}