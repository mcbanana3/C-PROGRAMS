#include <stdio.h>

int main(void) {
	
	int t,a,b,c;

	scanf("%d",&t);

	for (int i = 0; i < t; i++) {

	    scanf("%d%d%d",&a,&b,&c);

	    if(a==b || b==c || c==a)
	    printf("NO\n");

	    else
	    printf("YES\n");

	}

	return 0;
    
}
