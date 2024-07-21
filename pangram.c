#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char name[100];
    gets(name);
    int len = strlen(name);
    int h[26],j;

    //char lowerstr[50] = strlwr(name);

    for(int i = 0; i < len; i++){
        name[i] = tolower(name[i]);
    }

    //printf("%s", name);

    for(int i = 0; i < len; i++){
        h[name[i] - 'a']++;
    }

    for(j = 0; j < 26; j++){
        if(h[j] == 0){
            printf("Not a Pangram\n");
            break;
        }
    }

    if(j >= 26){
        printf("Pangram\n");
    }

    return 0;

}