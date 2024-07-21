#include<stdio.h>

void swap(int startindex, int endindex, int *num);

int min_value_index(int startindex, int endindex, int *num);

void sort(int startindex, int endindex, int* num);

int main() {

    int num[100];
    int num_no;

    FILE * nofile;

    nofile = fopen("numbers.txt", "r");

    fscanf(nofile, "%d", &num_no);

    for (int i = 0; i < num_no; i++)
    {
        fscanf(nofile, "%d\n", &num[i]);
    }

    for (int i = 0; i < num_no; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    sort(0, num_no-1, num);

    for (int i = 0; i < num_no; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
    
}

void swap(int startindex, int endindex, int *num) {
    int temp = num[startindex];
    num[startindex] = num[endindex];
    num[endindex] = temp;
}

int min_value_index(int startindex, int endindex, int *num) {

    int min = num[startindex];
    int minValIndex = startindex;

    for (int i = startindex; i <= endindex; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
            minValIndex = i;
        }
    }

    return minValIndex;
    
}

void sort(int startindex, int endindex, int* num) {
    
    if (startindex == endindex)
    {
        return;
    }

    else {
        int minValIndex = min_value_index(startindex, endindex, num);
        swap(startindex, minValIndex, num);
        sort(startindex+1, endindex, num);
    }
    
}