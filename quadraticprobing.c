#include<stdio.h>

int hashfunc(int key, int SIZE){
    return key % SIZE;
}

int hashfunc2(int key, int SIZE, int j){
    return (key+j*j)%SIZE;
}

int main(){

    int n, index, j;
    scanf("%d", &n);

    int hashTable[n];
    int keys[n];

    for(int i = 0; i < n; i++){
        hashTable[i] = -1;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &keys[i]);
        index = hashfunc(keys[i], n);
        if(hashTable[index] == -1){
            hashTable[index] = keys[i];
        }

        else{
            j = 0;
            index = hashfunc2(keys[i], n, j);
            while(hashTable[index] != -1){
                j++;
                index = hashfunc2(keys[i], n, j);
            }
            hashTable[index] = keys[i];
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", hashTable[i]);
    }

    return 0;
}