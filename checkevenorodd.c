//(Q7)CHECK ODD OR EVEN
#include<stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    if (a & 1 == 1)
    {
        printf("ODD\n");
    }
    
    else{
        printf("EVEN\n");
    }

    return 0;

}