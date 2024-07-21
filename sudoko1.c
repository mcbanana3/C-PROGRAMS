#include<stdio.h>
#include<stdlib.h>

void print_matrix(int(*)[9]);
int Check_Rows(int(*)[9]);
int Check_Columns(int(*)[9]);
int Check_Matrix(int(*)[9]);

int main() {

    int sudoko[9][9];

    FILE * sudoko_file;

    sudoko_file = fopen("sudoko.txt", "r");

    for (int i = 0; i < 9; i++)
    {
        for (int j= 0; j < 9; j++)
        {
            fscanf(sudoko_file, "%d", &sudoko[i][j]);
        }
    }

    print_matrix(sudoko);

    if (Check_Rows(sudoko) == 1)
    {
        if (Check_Columns(sudoko) == 1)
        {
            if (Check_Matrix(sudoko) == 1)
            {
                printf("Correct Solution.\n");
            }

            else {
                printf("Not a Correct solution.\n");
            }
            
        }

        else {
            printf("Not a Correct solution.\n");
        }
        
    }

    else {
        printf("Not a Correct solution.\n");
    }

    fclose(sudoko_file);

    return 0;

}

void print_matrix(int sArray[9][9])
{
    printf("The Sudoko Matrix is : \n");

    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d\t", sArray[i][j]);
        }
        printf("\n");
    }

    printf("\n");    
}

int Check_Rows(int sArray[9][9]) {

    int cArray[10] = {0};
    int allRcorrect = 1;
    
    for (int i = 0; i < 9  ; i++)
    {
        int isRcorrect = 1;

        for (int j = 0; j < 10; j++)
        {
            cArray[j] = 0;
        }

        for (int j = 0; j < 9; j++)
        {
            cArray[sArray[j][i]] = 1;
        }

        for (int j = 1; j < 10; j++)
        {
            if (cArray[j] == 0)
            {
                isRcorrect = 0;
                break;
            }
        }

        if (isRcorrect == 0)
        {
            allRcorrect = 0;
            break;
        }
        
    }

    return allRcorrect;
    
}

int Check_Columns(int sArray[9][9]) {

    int cArray[10] = {0};
    int allCcorrect = 1;
    
    for (int i = 0; i < 9  ; i++)
    {
        int isCcorrect = 1;

        for (int j = 0; j < 10; j++)
        {
            cArray[j] = 0;
        }

        for (int j = 0; j < 9; j++)
        {
            cArray[sArray[i][j]] = 1;
        }

        for (int j = 1; j < 10; j++)
        {
            if (cArray[j] == 0)
            {
                isCcorrect = 0;
                break;
            }
        }

        if (isCcorrect == 0)
        {
            allCcorrect = 0;
            break;
        }
        
    }

    return allCcorrect;
    
}

int Check_Matrix(int sArray[9][9]) {

    int cArray[10] = {0};
    int AllCorrect = 1;

    for (int i = 0; i <= 6; i = i + 3)
    {
        for (int j = 0; j <= 6; j+=3)
        {
            int isCorrect = 1;

            for (int k = 0; k < 10; k++)
            {
                cArray[k] = 0;
            }
            
            for (int k = i; k < i + 3; k++)
            { 
                for (int l = j; l < j + 3; l++)
                {
                    cArray[sArray[k][l]] = 1;
                }
            }

            for (int j = 1; j < 10; j++)
            {
                if (cArray[j] == 0)
                {
                    isCorrect = 0;
                    break;
                }
            }

            if (isCorrect == 0)
            {
                AllCorrect = 0;
                break;
            }
        }

        if (AllCorrect == 0)
        {
            break;
        }

    }

    return AllCorrect;
    
}