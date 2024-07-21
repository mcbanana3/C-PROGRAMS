#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, y;
    int firstX, firstY;
    
    scanf("%d %d", &firstX, &firstY);

    printf("%d %d", firstX, firstY);

    int isVertical = 1; 
    int isHorizontal = 1;

    for (int i = 1; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x != firstX) {
            isVertical = 0;
        }
        if (y != firstY) {
            isHorizontal = 0;
        }
    }

    if (isVertical || isHorizontal) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
