#include <stdio.h>

int main(void) {
	
    int t;
    int pages[1000];
    int words[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d", &pages[i], &words[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        printf("%d \n", pages[i] * words[i]);
    }
    
	return 0;
}