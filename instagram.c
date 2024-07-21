#include <stdio.h>

int main() {

	int x,y;
    int t;

	scanf("%d",&t);

	for (int i = 0; i < t; i++)
	{
	    scanf("%d %d",&x,&y);

	    if(x>10*y) {
            printf("YES\n");
        }
	    
	    else {
            printf("NO\n");
        }
	    
	}

	return 0;
    
}

