#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct {
    Node *head;
}HashTable;

int hashfunc(int key){
    return key % SIZE;
}

void insert(HashTable hashTable[], int key){
    int index = hashfunc(key);
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = hashTable[index].head;
    hashTable[index].head = newNode;
}

void display(HashTable hasthtable[]){
    for(int i = 0; i < SIZE; i++){
        Node *temp = hasthtable[i].head;
        printf("Bucket %d : ",i);
        while(temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main(){

    HashTable hashTable[SIZE];

    for(int i = 0; i < SIZE; i++){
        hashTable[i].head = NULL;
    }

    insert(hashTable, 10);
    insert(hashTable, 20);
    insert(hashTable, 30);
    insert(hashTable, 40);
    insert(hashTable, 50);
    insert(hashTable, 60);
    insert(hashTable, 70);
    insert(hashTable, 80);
    insert(hashTable, 90);
    insert(hashTable, 100);

    display(hashTable);

    return 0;
}