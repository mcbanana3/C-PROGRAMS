#include<stdio.h>
#include<stdlib.h>

int main() {

    for (int i = 0; i <= 6; i = i + 3)
    {
        for (int j = 0; j <= 6; j+=3)
        {
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++)
                {
                    printf("index[%d][%d]\n", k,l);
                }
                
            }
        }
    }

    return 0;

}