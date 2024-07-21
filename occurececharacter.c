#include<stdio.h>
#include<string.h>

int occurences(char *str, char target){

    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }

    return count;
    
}

int main(){

    char str[100];

    printf("Enter the String : ");
    gets(str);

    char target;

    printf("Enter the Target you want to find : ");
    scanf("%c", &target);

    printf("The total Occurences of %c in '%s' is %d times\n", target, str, occurences(str, target));

    return 0;

}