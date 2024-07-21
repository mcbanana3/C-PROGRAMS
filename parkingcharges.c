#include <stdio.h>

int main(void) {
    
	int x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	
	if(z == 1)
	{
	    printf("%d\n", x);
	}
	
	else {
	    printf("%d\n", ((y * (z-1)) + x));
	}
	
	return 0;
	
}

