#include<stdio.h>

#define SIZE 32

int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE - 1){
        printf("Overflow\n");
    }

    else{
        top += 1;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        printf("Underflow\n");
    }

    else{
        printf("%d ", stack[top]);
        top -= 1;
    }
}

int main(){

    int num;
    scanf("%d", &num);

    while(num > 0){
        push(num % 2);
        num /= 2;
    }

    while(top != -1){
        pop();
    }

    return 0;
}