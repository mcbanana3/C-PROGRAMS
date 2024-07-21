#include<stdio.h>

#define SIZE 4

int top = -1;
int stack[SIZE];

void peek(){
    if(top == -1) {
        printf("Stack is empty\n");
    }

    else{
        printf("Top element of the stack is %d \n",stack[top]);
    }
}

int main(){

    peek();

    return 0;
}