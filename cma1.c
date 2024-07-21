#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int ans = atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]) + atoi(argv[4]);
    printf("%d\n", ans);

    return 0;
}