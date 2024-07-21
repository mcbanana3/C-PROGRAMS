#include<stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(){
    if(top == SIZE - 1){
        printf("Overflow\n");
    }

    else{
        int x;
        scanf("%d", &x);
        top += 1;
        stack[top] = x;
    }
}

void pop(){
    if(top == -1){
        printf("Underflow\n");
    }

    else{
        printf("The Poped element is : %d\n", stack[top]);
        top -= 1;
    }
}

void peek(){
    if(top == -1){
        printf("Stack is Empty\n");
    }

    else{
        printf("The peek element is %d\n", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Underflow\n");
    }

    else{
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main(){

    while(1){
        int choice;
        printf("Select the Choice (1)Push (2)Pop (3)Peek (4)Display (5)Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
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
        
        default:
            printf("Invalid Options\n");
            break;
        }
    }

    return 0;
}