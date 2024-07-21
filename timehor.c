#include<stdio.h>

int main(){

    int hh;
    scanf("%d", &hh);

    if(hh > 4 && hh <= 12){
        printf("Morning\n");
    }

    else if(hh > 12 && hh <= 17){
        printf("Afternoon\n");
    }

    else if(hh > 17 && hh <= 20){
        printf("Evening\n");
    }

    else if(hh > 20 && hh <= 4){
        printf("Night\n");
    }

    else{
        printf("Invalid Number\n");
    }

    return 0;
}