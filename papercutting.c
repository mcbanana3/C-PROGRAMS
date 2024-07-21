#include <stdio.h>

int main(void) {

    int t;
    
    scanf("%d",&t);
    
    for (int i = 0; i < t; i++)
    {
        int n,k;
        
        scanf("%d%d",&n,&k);
        printf("%d\n",(((n/k)*k)*((n/k)*k)/(k*k)));

    }
    
    return 0;

}

