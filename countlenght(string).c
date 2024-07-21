#include<stdio.h>

int countlenght(char arr[]);

int main() {

    char firstname[100];

    fgets(firstname, 100, stdin);

    printf("Lenght is : %d", countlenght(firstname));

    return 0;

}

int countlenght(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}