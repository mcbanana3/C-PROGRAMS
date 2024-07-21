#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*top = NULL;

void push(int value){
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct stack*));
    newNode->data = value;

    if(top == NULL){
        top = newNode;
        top->next = NULL;
    }

    else{
        newNode->next = top;
        top = newNode;
    }
}

void pop(){
    if(top == NULL){
        printf("Stack Underflow\n");
        return;
    }

    else{
        struct Node *temp = top;
        top = top->next;
        printf("The deleted element is : %d\n", temp->data);
        free(temp);
    }
}

void display(){
    if(top == NULL){
        printf("Stack is Empty\n");
    }

    else{
        struct Node *temp = top;
        while(temp != NULL){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
        free(temp);
    }
}

void peek(){
    if(top == NULL){
        printf("Stack is Empty\n");
    }

    else{
        printf("The Top-most element is : %d\n", top->data);
    }
}

int main(){
    
    int choice, value;
    while(1){
        printf("Enter Choice : (1)PUSH (2)POP (3)PEEK (4)DISPLAY (5)Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Value : ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
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