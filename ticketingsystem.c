//Railway Ticket refund System

#include<stdio.h>
#include<stdbool.h>

bool isleapyear(int year){

    //To Check Leap Year.

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool isdatevalid(int cancelation_date, int cancelation_month, int cancelation_year){

    //to Check if Date is Valid or Invalid.

    int normal_year[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (cancelation_year >= 1900 && cancelation_year <= 2100)
    {
        if (cancelation_month >= 1 && cancelation_month <= 12)
        {
            if (cancelation_month == 2)
            {
                // to check if year is leap or not
                if(isleapyear(cancelation_year))
                {
                    if(cancelation_date>=1 && cancelation_date<=29){
                        return true;
                    }
                        
                    else{
                        return false;
                    }
                }
                
                else
                {
                    if(cancelation_date>=1 && cancelation_date<=28){
                        return true;
                    }

                    else{
                        return false;
                    }
                }
            }

            else{
                //check no of days in months
                int max_days = normal_year[cancelation_month];

                if (cancelation_date >= 1 && cancelation_date <= max_days) 
                {
                    return true;
                }

                else{
                    return false;
                }
            }   
        }

        else{
            return false;
        }
        
    }

    else{
        return false;
    }
}

bool zerorefund(int cancelation_date, int reservation_date, int cancelation_month, int reservation_month, int cancelation_year, int reservation_year){

    //zero reund case

    printf("%d/%d/%d & %d/%d/%d\n", cancelation_date, cancelation_month, cancelation_year, reservation_date, reservation_month, reservation_year);

    if((cancelation_year >= reservation_year) && (cancelation_month >= reservation_month) && (cancelation_date >= reservation_date)){
        printf("Got True\n");
        return true;
    }

    else{
        printf("Got False\n");
        return false;
    }
}

void getpreviousdate(int reservation_date, int reservation_month, int reservation_year, int *prevdd, int *prevmm, int * prevyy){
    int normal_year[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    //to get previous date from the reservation date

    if(reservation_date >= 2){
        *prevdd = reservation_date - 1;
        *prevmm = reservation_month;
        *prevyy = reservation_year;
    }

    //to check months and get prevoius dates excluding january and march

    else{
        if(reservation_month != 3 && reservation_month != 1){
            *prevdd = normal_year[reservation_month-1];
            *prevmm = reservation_month - 1;
            *prevyy = reservation_year;
        }

        //case for march i.e february leap or not

       else if(reservation_month == 3){
            if(isleapyear(reservation_year) == true){
                *prevdd = 29;
            }

            else{
                *prevdd = 28;
            }
            
            *prevmm = reservation_month - 1;
            *prevyy = reservation_year;
       }

       // case for january as date could be 1st

       else if(reservation_month == 1){
            *prevdd = 31;
            *prevmm = 12;
            *prevyy = reservation_year - 1;
       }
    }
    
}

bool checkdateequal(int prevdd, int prevmm, int prevyy, int cancelation_date, int cancelation_month, int cancelation_year){

    //To check if the date is equal.

    if(prevdd == cancelation_date && prevmm == cancelation_month && prevyy == cancelation_year){
        return true;
    }

    else{
        return false;
    }
}

int main(){

    int cancelation_date, cancelation_month, cancelation_year, reservation_date, reservation_month, reservation_year;
    int prevdd, prevmm, prevyy;
    float fare;

    // to scan the fare and cancelation dt enad reservation date

    scanf("%f", &fare);
    scanf("%d/%d/%d", &cancelation_date, &cancelation_month, &cancelation_year);
    scanf("%d/%d/%d", &reservation_date, &reservation_month, &reservation_year);

    //Check date validity.

    if (isdatevalid(cancelation_date, cancelation_month, cancelation_year) && isdatevalid(reservation_date, reservation_month, reservation_year))
    {

        //to check if it is zero refund case or not

        if(zerorefund(cancelation_date ,reservation_date,cancelation_month, reservation_month,cancelation_year, reservation_year)){
            printf("Zero Refund case\n");
            printf("%.2f\n", fare);
            printf("0.00\n");
        }

        // To check if it is 50% refund case or not

        else{
            getpreviousdate(reservation_date, reservation_month,reservation_year, &prevdd, &prevmm, &prevyy);
            printf("%d/%d/%d\n", prevdd, prevmm, prevyy);
            if(checkdateequal(prevdd, prevmm, prevyy, cancelation_date, cancelation_month, cancelation_year)){
                printf("50 Refund case\n");
                printf("%.2f\n", fare);
                printf("%.2f\n", fare/2.0);
            }

            // to check if it is 75% refund case or not

            else{
                printf("75 Refund case\n");
                printf("%.2f\n", fare);
                printf("%.2f\n", fare * (3.0/4.0));
            }
        }
    }

    // TO print if the date is invalid or not

    else{
        printf("INVALID-DATE\n");
    }

    return 0;
}