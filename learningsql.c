#include <stdio.h>

int main(void) {
	
    int t;
    int r[1000];
    int c[1000];
    int e[1000];
    int ans[1000];

    printf("");
    scanf("%d %d %d", &r[0], &c[0], &e[0]);

    ans[0] = (r[0] + e[0]) * c[0];

    printf("%d \n", ans[0]); 
    
	return 0;
}