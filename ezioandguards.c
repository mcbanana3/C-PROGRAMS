#include<stdio.h>

int main(void) {

    int t,x,y;

    scanf("%d",&t);

    for(int i = 0; i < t ; i++)
    {
        scanf("%d %d", &x,&y);
        
        if(x>=y)
        {
            printf("yes\n");
        }
        else if(x<y)
        {
            printf("no\n");
        }

    }
	
	return 0;
}