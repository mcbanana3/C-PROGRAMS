#include<stdio.h>
#include<math.h>

int main(){

    int t1, t2, terms;
    int per_row;

    printf("Enter Term 1 and term 2 : ");
    scanf("%d %d", &t1, &t2);

    printf("Enter No of Terms for each table and tables for each row : ");
    scanf("%d %d", &terms,&per_row);

    if(t1 > t2){
        int temp = t1;
        t1 = t2;
        t2 = t1;
    }

    int diff = (t2 - t1) + 1;

    int term_each = ceil((float)diff/(float)per_row);

    printf("%d\n", term_each);

    for(int k = 0; k < term_each; k++)
    {
        for(int l=1;l<=terms;l++)
        {
            for(int i = t1+5*k, j=0; i <= t2 && j<per_row; i++, j++)
            {
                printf("%d x %d = %d\t", l,i, l * i); 
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
    
}