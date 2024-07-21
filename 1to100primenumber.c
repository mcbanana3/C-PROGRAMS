#include<stdio.h>

int main(){

    for(int i = 1; i <= 100; i++){

        int count = 0;

        for(int j = 1; j <= 100; j++)
        {
            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            printf("%d ", i);
        }
        
    }

    return 0;
    
}