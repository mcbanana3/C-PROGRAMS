#include <stdio.h>

int big(int a, int b, int c);

int main(void) {

	int t,a,b,c;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
	    scanf("%d %d %d", &a, &b, &c);
        big(a,b,c);
	}

	return 0;

}

int big(int a, int b, int c) {

    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }

    else if (b >= a && b >= c)
    {
        printf("%d\n", b);
    }
    
    else if (c >= a && c >= b)
    {
        printf("%d\n", c);
    }

}