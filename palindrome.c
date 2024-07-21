#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void push(struct Node** top, char data) {
    struct Node* node = newNode(data);
    node->next = *top;
    *top = node;
}

char pop(struct Node** top) {
    if (*top == NULL) {
        return '\0';
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    char popped = temp->data;
    free(temp);
    return popped;
}

int isAlphanumeric(char ch) {
    return isalnum(ch);
}

void checkPalindrome(const char* input) {
    struct Node* stack = NULL;
    struct Node* queue = NULL;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isAlphanumeric(input[i])) {
            push(&stack, tolower(input[i]));
            queue = newNode(tolower(input[i]));
        }
    }

    while (stack != NULL && queue != NULL) {
        char stackTop = pop(&stack);
        char queueFront = queue->data;

        if (stackTop != queueFront) {
            printf("Not Palindrome\n");
            return;
        }

        queue = queue->next;
    }

    printf("Palindrome\n");
}

int main() {

    char input[100];
    gets(input);
    checkPalindrome(input);

    return 0;
}
