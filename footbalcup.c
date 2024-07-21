#include <stdio.h>

int main(void) {

	int t,x,y;

	scanf("%d",&t);

	for(int i=1 ; i<=t ; i++) {

	    scanf("%d%d",&x,&y);

	    if(x > 0 && y > 0) {
	        if(x!=y) {
                printf("YES\n");
            }
	        
	        else{
                printf("NO\n");
            }
	    }
	    
	}
	return 0;
}
