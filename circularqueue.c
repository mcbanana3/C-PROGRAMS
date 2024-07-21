#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void enqueue(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if(rear == NULL){
        front = rear = newNode;
        rear->next = front; 
    }

    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

void dequeue(){
    if(front == NULL && rear == NULL){
        printf("Queue is Empty\n");
    }

    else if(front == rear){
        printf("The Deleted element is : %d\n", front->data);
        front = rear = NULL;
    }

    else{
        printf("The Deleted element is : %d\n", front->data);
        front = front->next;
        rear->next = front;
    }
}

void display(){
    if(front == NULL && rear == NULL){
        printf("Queue is Empty\n");
    }

    else{
        struct node *temp = front;
        while(temp->next != front){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d-->NULL\n", temp->data);
    }
}

void lenght(){
    if(front == NULL && rear == NULL){
        printf("Queue is Empty\n");
    }

    else{
        int count = 0;
        struct node *temp = front;
        while(temp->next != front){
            count++;
            temp = temp->next;
        }
        printf("The lenght of Queue is : %d\n", count+1);
    }
}

int main(){

    int choice, value;
    while(1){
        printf("Enter Choice : (1)ENQUEUE (2)DEQUEUE (3)LENGHT (4)DISPLAY (5)EXIT\n");
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
                lenght();
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