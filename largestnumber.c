#include<stdio.h>
#include<stdlib.h>

int main() {

    int no_num;
    int max;
    int *Num;

    scanf("%d", &no_num);
    
    Num = (int*)malloc(sizeof(int)*no_num);
    max = 1;

    for (int i = 0; i < no_num; i++)
    {
        scanf("%d", &Num[i]);
    
        if (Num[i] > max)
        {
            max = Num[i];
        }
    }

    printf("The Maximum number is : %d\n", max);

    return 0;
    
}