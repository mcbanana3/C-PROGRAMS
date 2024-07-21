#include<stdio.h>

int main(){

    int a,b;

    FILE * fr;

    fr = fopen("note1.txt", "r");

    fscanf(fr, "%d %d", &a, &b);

    fclose(fr);

    fr = fopen("note2.txt", "w");

    fprintf(fr, "%d", a + b);

    fclose(fr);

    return 0;
}