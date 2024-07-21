#include <stdio.h>

int main(void) {

    int t,i ,X,Y,Z;

    scanf("%d",&t);
    
    for(i=0;i<t;i++) {

	scanf("%d %d %d",&X,&Y,&Z);
	    
	if((X>Y)&&(X>Z))
	printf("setter\n");

	else if((Y>X)&&(Y>Z))
	printf("tester\n");

	else if((Z>X)&&(Z>Y))
	printf("Editorialist\n");
	
	}

	return 0;

}