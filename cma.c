#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    int ans = atoi(argv[1]) % atoi(argv[2]);
    printf("%d", ans);

    return 0;
}