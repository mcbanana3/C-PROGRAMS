#include<stdio.h>
main(){

	int t,x,y,z,i,a,b,c,d;

	scanf("%d",&t);

	for(i=0;i<t;i++){

		scanf("%d%d%d",&x,&y,&z);

		a=x*5;

		b=y*10;

		c=a+b;

		d=c/z;

		printf("%d\n",d);	
		
	}

    return 0;

}
