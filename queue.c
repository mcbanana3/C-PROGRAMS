#include<stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(){
    if(front == -1 && rear == -1){
        front += 1;
        rear += 1;
        int x;
        scanf("%d", &x);
        queue[rear] = x;
    }

    else if(rear == SIZE - 1){
        printf("OVERFLOW\n");
    }

    else{
        rear += 1;
        int x;
        scanf("%d", &x);
        queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("UNDERFLOW\n");
    }

    else if(front == rear){
        printf("Dequeued element is %d\n", queue[front]);
        front = rear = -1;
    }

    else{
        printf("Dequeued element is %d\n", queue[front]);
        front += 1;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("The Queue is Empty\n");
    }

    else{
        for(int i=front;i<=rear;i++){
            printf("%d ", queue[i]);
        }
    }
}

int main(){

    while (1)
    {
        int choice;
        printf("Select the Choice (1)Enqueue (2)Dequeue (3)Display (4)Exit\n");
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
            
            default:
                printf("Invalid Option\n");
                break;
        }
    }

    return 0;
}