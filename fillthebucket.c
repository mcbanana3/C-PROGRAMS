#include <stdio.h>
#include <math.h>

int main() 
{
	int t,k,x,d;
	
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
	    
	   scanf("%d %d",&k,&x);
	   d=k-x;
	   
	   printf("%d\n",d);
	   
	}
	
	return 0;
	
}