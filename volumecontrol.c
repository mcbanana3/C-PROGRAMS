#include <stdio.h>

int main(void) {

    int t;
    int p,q;

	scanf("%d\n",&t);

	for (int i = 0; i < t; i++) {

	   scanf("%d %d \n",&p,&q);

	   if(p>q) {
	       printf("%d\n",p-q);
       }

	   else{
	   printf("%d\n",q-p);
	   }

    }

	return 0;

}


