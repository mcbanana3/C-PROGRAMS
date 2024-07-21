#include <stdio.h>

int main() {
    int from = 10;
    int to = 20;
    int terms = 3;
    int tables_per_row = 5;

    for (int k = 10; k <= 20; k++) {
        for (int i = 1; i <= terms; i++) {
            int result = i * k;
            printf("%d x %d = %2d", i, k, result);
            if (k < to) {
                printf("   ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}