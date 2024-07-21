#include<stdio.h>

int main() {

    int t;
    int patties[10000];
    int buns[10000];
    int burgers;

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &patties[i], &buns[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int burgers = patties[i] < buns[i] ? patties[i] : buns[i];
        printf("%d \n", burgers); 
    }
    
    return 0;
    
}