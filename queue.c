#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void enqueue(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(front == NULL){
        front = newNode;
        rear = newNode;
        front->next = NULL;
        rear->next = NULL;
    }

    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = NULL;
    }
}

void dequeue(){
    if(front == NULL && rear == NULL){
        printf("Queue is Empty\n");
    }

    else{
        printf("%d element is Deleted\n", front->data);
        front = front->next;
    }
}

void display(){
    if(front == NULL){
        printf("Empty Queue\n");
    }

    else{
        struct node *temp = front;
        while(temp != NULL){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
        free(temp);
    }
}

void peek(){
    if(front == NULL){
        printf("Empty Queue\n");
    }

    else{
        printf("The peek element is %d\n", rear->data);
    }
}

int main(){
    
    int choice, value;
    while(1){
        printf("Enter Choice : (1)ENQUEUE (2)DEQUEUE (3)PEEK (4)DISPLAY (5)EXIT\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Value : ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(1);

            default:
                printf("Enter a Valid Choice\n");
                break;
        }
    }

    return 0;
}