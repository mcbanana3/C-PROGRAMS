#include<stdio.h>
#include<string.h>

int main() {

    char Name[20];
    int max = 0;
    char frequency[255];
    int l;

    printf("Enter a Word : ");
    scanf("%s", Name);

    l = strlen(Name);

    printf("The String Lenght is : %d \n", l);

    for (int i = 0; i < l; i++)
    {
        frequency[Name[i]]++;
    }
    
    for (int i = 0; i < l; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
        }
        
    }
    
    printf("The highest frequency number is %d \n", max);

    return 0;

}
