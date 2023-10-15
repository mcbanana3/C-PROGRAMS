#include<stdio.h>

int main(){

    int age, time;
    char seating, rating;

    scanf("%d", &age);
    scanf("%d", &time);
    scanf(" %c", &seating);
    scanf(" %c", &rating);

    //printf("%d %d %c %c", age, time, seating, rating);

    if (age >= 1 && age <= 12)
    {
        if (rating == 'U')
        {
            if (time >= 0 && time<= 17)
            {
                if (seating == 's')
                {
                    printf("%d", 300);
                }

                else{
                    printf("%d", 400);
                }
            
            }

            else if(time > 17 && time < 24)
            {
                if (seating == 's')
                {
                    printf("%d", 400);
                }

                else{
                    printf("%d", 500);
                }
                
            }
            
        }

        else{
            printf("CUSTOMER IS NOT ALLOWED\n");
        }
        
    }

    else if (age > 12 && age < 18)
    {
        if (rating == 'U')
        {
            if (time >= 0 && time<= 17)
            {
                if (seating == 's')
                {
                    printf("%d", 300);
                }

                else{
                    printf("%d", 400);
                }
            
            }

            else if(time > 17 && time < 24)
            {
                if (seating == 's')
                {
                    printf("%d", 400);
                }

                else{
                    printf("%d", 500);
                }
                
            }
            
        }

        else if (rating == 'A')
        {
            printf("CUSTOMER REQUIRES ADULT COMPANY and ticket price will be Rs. %d\n", 350);
        }
        
    }
    
    else if (age >= 18)
    {
        if (rating == 'U')
        {
            if (time >= 0 && time<= 17)
            {
                if (seating == 's')
                {
                    printf("%d", 300);
                }

                else{
                    printf("%d", 400);
                }
            
            }

            else if(time > 17 && time < 24)
            {
                if (seating == 's')
                {
                    printf("%d", 400);
                }

                else{
                    printf("%d", 500);
                }
                
            }
            
        }

        else if (rating == 'A')
        {
            printf("%d", 600);
        }
        
    }

    return 0;
}
