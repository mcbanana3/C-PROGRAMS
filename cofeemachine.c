#include<stdio.h>

int main(){

    int choice;
    printf("Select your Preffered option (1)Regular Coffee (2)Decaffeinated Coffee\n");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Bre Regular coffee\n");
    }

    else if(choice == 2){
        printf("Adding Decaffeinated coffee\n");
    }

    else{
        printf("Invalid Option\n");
    }

    return 0;
}