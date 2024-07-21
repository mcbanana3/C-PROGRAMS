#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

    char s[1000];

    scanf("%s", &s);

    int n = strlen(s);

    int *Num_Array = (int*)malloc(sizeof(int)*n);
    int *Num_Array1 = (int*)calloc(n, sizeof(int));
    int *Res_array = (int*)malloc(sizeof(int)*n);

    Num_Array1[n - 1] = 1;

    for (int i = 0; i < n; i++)
    {
        Num_Array[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        Num_Array[i] = (s[i] - '0');
    }

    int carry = 0;
    int sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        sum = Num_Array[i] + Num_Array1[i] + carry;
        Res_array[i] = sum % 10;
        carry = sum/10;
    }

    if (carry != 0)
    {
        printf("%d", carry);

        for (int i = 0; i < n; i++)
        {
            printf("%d", Res_array[i]);
        }
        
    }

    else{
        
        for (int i = 0; i < n; i++)
        {
            printf("%d", Res_array[i]);
        }
        
    }

    return 0;

}