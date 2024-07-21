#include<stdio.h>

int main() {

    int day; 
    
    //1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-saturday, 7-Sunday

    printf("Enter day (1-7) : ");
    scanf("%d", &day);

    switch (day) {
        case 1 :
                printf("Monday \n");
                break;

        case 2 :
                printf("Tuesday \n");
                break;

        case 3 :
                printf("Wednesday \n");
                break;

        case 4 :
               printf("Thrusday \n");
               break;

        case 5 :
               printf("Friday \n");
               break;

        case 6 :
               printf("Saturday \n");
               break;

        case 7 :
               printf("Sunday \n");
               break;
    
        default: 
               printf("Not a valid Day");
    }
    
    return 0;

}