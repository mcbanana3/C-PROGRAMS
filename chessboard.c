#include<stdio.h>

int main(){

    char color;
    int x, y;

    scanf("%c", &color);
    scanf("%d %d", &x, &y);

    if ((x >= 1 && x <= 8) && (y >= 1 && y <= 8))
    {
        if (color == 'b' || color == 'w')
        {
            if ((x + y) % 2 == 0)
            {
                if (color == 'b')
                {
                    printf("Black\n");
                }

                else{
                    printf("White\n");
                }
            }

            else if ((x + y) % 2 == 1)
            {
                if (color == 'b')
                {
                    printf("White\n");
                }

                else{
                    printf("Black\n");
                }
            }
        }

        else{
            printf("Invalid Color\n");
        }
        
    }

    else{
        printf("Not Valid\n");
    }
    
    return 0;
    
}