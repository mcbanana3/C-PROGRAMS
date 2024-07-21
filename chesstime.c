#include <stdio.h>

int main(void) {
	
    int t;
    int n;
    int ans;

    printf("");
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ans = (n * 60) / 20;
        printf("%d \n", ans);
    }
    
	return 0;
}