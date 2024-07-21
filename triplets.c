#include<stdio.h>
#include<math.h>

int main(){

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if((float)sqrt(pow(i,2) + pow(j,2)) - (sqrt(pow(i,2) + pow(j,2)) == sqrt(pow(i,2) + pow(j,2)))){
                printf("%d %d %d are Triplet ", i,j,sqrt(pow(i,2) + pow(j,2)));
            }
        }
        
    }
    

    return 0;
}