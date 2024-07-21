#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    int array[5] = {0};
    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            array[0] = 1;
            continue;
        }

        else if (str[i] == 'e')
        {
            array[1] = 1;
            continue;
        }
        
        else if (str[i] == 'i')
        {
            array[2] = 1;
            continue;
        }

        else if (str[i] == 'o')
        {
            array[3] = 1;
            continue;
        }

        else if (str[i] == 'u')
        {
            array[4] = 1;
            continue;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if(array[i] == 0){
            printf("All Vowels are not present\n");
            break;
        }

        else{
            if(i == 4){
                printf("All Vowels are Present\n");
                break;
            }
        }
    }

    return 0;
    
}