#include <stdio.h>

int main(void) {

	int t;
    int n;

	scanf("%d",&t);

	for (int i = 0; i < t; i++) {
	    
	    scanf("%d",&n);

	    if(n>20) {
	        printf("HOT\n");
	    } 
        
        else {
	        printf("COLD\n");
	    }

	}

	return 0;
    
}