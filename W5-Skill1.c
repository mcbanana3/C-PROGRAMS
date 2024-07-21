#include<stdio.h>
#include<math.h>

int main() {

    int num_blocks;

    scanf("%d", &num_blocks);

    float n = sqrt(8*num_blocks+1)-1;
    float height = n/2.0;

    printf("%d\n", floor((double)height));

    return 0;

}