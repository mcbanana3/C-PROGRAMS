# include<stdio.h>

int main() {
    
    char Name[30];
    int Age;
    char College_Name[50];

    printf("Enter your Name :  \n");
    scanf("%s", Name);

    printf("Enter your Age :  \n");
    scanf("%d", &Age);

    printf("Enter your college Name :  \n");
    scanf("%s", College_Name);

    printf("Details %s,%d,%s", Name , Age , College_Name);

    return 0;
}