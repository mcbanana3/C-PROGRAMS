#include<stdio.h>

int main() {

    int a,y,x,t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d %d %d", &x, &y, &a);
        
        if(a < y && a >= x)
	    {
	        printf("YES\n");
	    }

	    else {
	        printf("NO\n");
	    }

    }

    return 0;

}