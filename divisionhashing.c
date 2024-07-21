#include<stdio.h>

#define SIZE 10

int hashfunc(int key){
    return key % SIZE;
}

int main(){

    int index;
    int keys[] = {10,11,12,13,14,15,16,17,18,19};
    int hashTable[SIZE];

    for(int i = 0; i < SIZE; i++){
        hashTable[i] = -1;
    }

    for(int i = 0; i < SIZE; i++){
        index = hashfunc(keys[i]);
        hashTable[index] = keys[i];
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d ", hashTable[i]);
    }

    return 0;
}