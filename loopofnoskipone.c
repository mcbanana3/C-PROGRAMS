#include<stdio.h>

int main() {

    int test[500] = {0};

    for (int i = 1; i <= 60; i++) {
        if (i == 30)
        {
               continue; 
        }

        printf("%d \n", i);
        
    }

    return 0;
    
}