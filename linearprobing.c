#include<stdio.h>

int hashfunc(int key, int SIZE){
    return key % SIZE;
}

int hashfunc2(int key, int SIZE, int i){
    return (key+i)%SIZE;
}

int main(){

    int n, value, key, j, SIZE = 10;
    printf("Enter the SIZE OF Array : ");
    scanf("%d", &n);

    int hashArray[SIZE];

    for(int i = 0; i < SIZE; i++){
        hashArray[i] = -1;
    }

    for(int i = 0; i < n ; i++){
        printf("Enter the Elements : ");
        scanf("%d", &value);
        key = hashfunc(value, n);
        if(hashArray[key] == -1){
            hashArray[key] = value;
        }

        else{
            j = 1;
            key = hashfunc2(value, n, j);
            while(hashArray[key] != -1){
                j++;
                key = hashfunc2(value, n ,j);
            }
            hashArray[key] = value;
        }
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d ", hashArray[i]);
    }

    return 0;
}