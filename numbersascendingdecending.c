#include<stdio.h>
#include<stdlib.h>

int min_array(int sindex, int lindex, int *Array);
int min(int a, int b);

int max_array(int sindex, int lindex, int *Array);
int max(int a, int b);

int main() {

    int num_no;
    int *Num_array;

    FILE * no_file;

    no_file = fopen("nos1.txt", "r");

    fscanf(no_file, "%d\n", &num_no);
    printf("The Number of NOS are : %d\n", num_no);

    Num_array = (int*)malloc(sizeof(int)*num_no);


    for (int i = 0; i < num_no; i++)
    {
        fscanf(no_file, "%d", &Num_array[i]);
        printf("%d ", Num_array[i]);
    }

    printf("\n");

    printf("The Smallest Number is : %d\n", min_array(0, num_no - 1, Num_array));
    printf("The Largest Number is : %d\n", max_array(0, num_no - 1, Num_array));

    return 0;

}

int min_array(int sindex, int lindex, int *Array) {

    if (sindex == lindex)
    {
        return Array[sindex];
    }

    else {
        return min(Array[sindex], min_array(sindex+1, lindex, Array));
    }
    
}

int min(int a, int b) {

    if (a <= b)
    {
        return a;
    }

    else {
        return b;
    }
    
}

int max_array(int sindex, int lindex, int *Array) {

    if (sindex == lindex)
    {
        return Array[sindex];
    }

    else {
        return max(Array[sindex], max_array(sindex+1, lindex, Array));
    }
    
}

int max(int a, int b) {

    if (a >= b)
    {
        return a;
    }

    else {
        return b;
    }
    
}