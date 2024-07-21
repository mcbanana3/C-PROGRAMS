#include <stdio.h>

int main(void) {
    
	int i,t,x;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    
	    if(0.1*x>100)
	    printf("%.f\n",0.1*x);
	    
	    else
	    printf("100\n");
	    
	}
	
	return 0;
	
}
