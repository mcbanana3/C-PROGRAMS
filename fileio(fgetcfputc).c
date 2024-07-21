#include<stdio.h>

int main() {

    FILE *fptr;

    fptr = fopen("test.txt", "w");

    // fprintf(fptr, "%c", 'M');      {this is for ooverwriteing or to write and print it}
    // fprintf(fptr, "%c", 'S');
    // fprintf(fptr, "%c", 'F');
    // fprintf(fptr, "%c", 'F');
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'I');
    // fprintf(fptr, "%c", 'Q');
    // fprintf(fptr, "%c", 'K');
    
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);   

    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));    {this is to= read it form the tx  tfile}
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    

    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));
    // printf("%c \n", fgetc(fptr));

    fclose(fptr);

    return 0;

}