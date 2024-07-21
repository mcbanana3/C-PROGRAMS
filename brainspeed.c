#include <stdio.h>

int main(void) {
	
    int x[1000];
    int y[1000];

    printf("");
    scanf("%d %d", &x[0], &y[0]);
    
    if (y[0] > x[0])
    {
        printf("YES \n");
    }

    else {
        printf("NO \n");
    }
    
	return 0;

}