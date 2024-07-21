#include<stdio.h>
#include<stdlib.h>

void swap(int start_index, int End_index, int *Array);

int main() {

    int num_no;

    FILE * no_file;

    no_file = fopen("nos1.txt", "r");

    fscanf(no_file, "%d\n", &num_no);
    printf("The Number of NOS is : %d\n", num_no);

    return 0;

}

void swap(int start_index, int End_index, int *Array) {

    int temp = Array[start_index];
    Array[start_index] = Array[End_index];
    Array[End_index] = temp;
}