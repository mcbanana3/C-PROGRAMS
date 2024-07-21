#include<stdio.h>

int main() {

    char aplhabet;

    scanf("%c", &aplhabet);

    if(aplhabet == 'a' || aplhabet == 'e' || aplhabet == 'i' || aplhabet == 'o' || aplhabet == 'u'){
        printf("It's is a Vowel\n");
    }

    else{
        printf("It's a Consonant\n");
    }

    return 0;

}