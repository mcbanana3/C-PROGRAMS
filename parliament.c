#include<stdio.h>

int main(void) {
	
	int t,n,x;
	
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
	    
	    scanf("%d %d",&n,&x);
	    
	    if(x>=n/2.0) {
	        printf("yes\n");
	    }
	    
	    else {
	        printf("no\n");
	    }
	    
	}
	
	return 0;
	
}