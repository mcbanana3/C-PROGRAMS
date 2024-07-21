#include<stdio.h>
#include<string.h>

#define SIZE 5

int front = -1;
int rear = -1;

int queue[SIZE];

void enqueue(){
    if(front == -1 && rear == -1){
        int x;
        printf("Enter the value to Insert : ");
        scanf("%d", &x);
        queue[++rear] = x;
        front++;
    }

    else if(rear == SIZE - 1){
        printf("Queue is Overflow\n");
    }

    else{
        int x;
        printf("Enter the value to Insert : ");
        scanf("%d", &x);
        queue[++rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is Underflow\n");
    }

    else if(front == rear){
        printf("The element deleted from Queue are %d \n", queue[front]);
        front = -1;
        rear = -1;
    }

    else{
        printf("Removed element: %d\n", queue[front++]);
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is Empty\n");
    }

    else{
        for(int i=front;i<=rear;i++){
            printf("%d", queue[i]);
        }
    }
}

int main(){

    while(1){
        int choice;
        printf("Select a Choice (1)Add Patients, (2)Remove Patients (3)Display Patient Order (4)Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
        
        default:
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}