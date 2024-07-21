#include <stdio.h>

int main(void) {

	int t;

	int A,B,C;
    
	scanf("%d", &t);
	
    for (int i = 0; i < t; i++)
	{
	    scanf("%d%d%d", &A,&B,&C);

	    if(A + B + C >= 100 && A >= 10 && B >= 10 && C >= 10)
	    printf("\nPASS");
	    else
	    printf("\nFAIL");

	}

	return 0;

}

