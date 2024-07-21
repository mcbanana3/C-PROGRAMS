#include<stdio.h>
#include<stdlib.h>

int main() {

    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));

    ptr[0] = 205.25;
    ptr[1] = 2055.25;
    ptr[2] = 255.25;
    ptr[3] = 285.25;
    ptr[4] = 565.25;

    for (int i = 0; i < 5; i++)
    {
        printf("%f \n", ptr[i]);
    }
    
    return 0;

}