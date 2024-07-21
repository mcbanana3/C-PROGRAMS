#include<stdio.h>
#include<math.h>

int main() {

    char x;

    printf("Enter a Character : ");
    scanf("%c", &x);

    printf("Answer is : %d", (x >= '0') && (x <= '9') );

    return 0;

}