#include <stdio.h>
#include <stdbool.h>

int Calculate(int x, int y);

int main() {

    int x;
    int t;
    int y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        Calculate(x, y);
    }

    return 0;
    
}

int Calculate(int x, int y) {

    if (3*x < 2*y) {
        printf("%d\n",3 * x);
    }
	    
	else {
	    printf("%d\n",2 * y);
    }

}