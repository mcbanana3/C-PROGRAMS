#include <stdio.h>

int main(void) {
    
	int n,q,w,l=0,u=0;
	
	scanf("%d", &n);
	
	for(q=0; q<n; q++){
	    
	    scanf("%d", &w);
	    
	    if(w%2 == 0){ l++; }
	    
	    else{ u++; }
	    
	}
	
	if(l>u){ printf("READY FOR BATTLE"); }
	
	else{ printf("NOT READY"); }
	
	return 0;
	
}