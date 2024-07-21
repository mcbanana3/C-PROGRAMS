#include<stdio.h>
#include<math.h>

int main() {

    int length, width, hieght;
    scanf("%d %d %d", &length, &width, &hieght);

    int SA = 2 * ((length * width * length * hieght) + (width * hieght));

    printf("%d\n", SA);
    
    return 0;
    
}