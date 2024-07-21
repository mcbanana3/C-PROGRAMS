#include <stdio.h>

int main(void) {

	int i,t,x,y,cost1,cost2;

	scanf("%d",&t);

	for(i=0;i<t;i++)
	{

	    scanf("%d %d",&x,&y);

	    cost1 = x*100;
	    cost2 = y*10;

	    if(cost1<cost2)
	    printf("DISPOSABLE\n");

	    else if(cost1>=cost2)
	    printf("CLOTH\n");

	}

	return 0;
    
}

