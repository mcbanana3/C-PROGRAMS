#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head = NULL;

void addatbegin(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(head == NULL){
        head = newNode;
        newNode->next = NULL;
    }

    else{
        newNode->next = head;
        head = newNode;
    }
}

void addatend(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    newNode->data = value;

    if(head == NULL){
        head = newNode;
        newNode->next = NULL;
    }

    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }
}

void addatpos(int value, int pos){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    newNode->data = value;
    newNode->next = NULL;

    int i = 1;
    while(i != pos){
        i++;
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delatbegin(){
    if(head == NULL){
        printf("SLL is Empty\n");
    }

    else{
        printf("%d element is Deleted\n", head->data);
        head = head->next;
    }
}

void delatend(){
    if(head == NULL){
        printf("SLL is Empty\n");
    }

    else{
        struct node *temp = head, *prev;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        printf("%d element is Deleted\n", temp->data);
        prev->next = NULL;
        free(temp);
    }
}

void delatpos(int pos){
    if(head == NULL){
        printf("SLL is Empty\n");
    }

    else{
        struct node *temp = head, *prev;
        int i = 1;
        while(i != pos){
            prev = temp;
            temp = temp->next;
            i++;
        }
        printf("%d element deleted\n", temp->data);
        prev->next = temp->next;
        free(temp);
    }
}

void display(){
    if(head == NULL){
        printf("SLL is Empty\n");
    }

    else{
        struct node *temp = head;
        while(temp != NULL){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
        free(temp);
    }
}

int main(){

    int choice, value, pos;
    while(1){
        printf("Select a Choice : (1)Add at Begin (2)Add at end (3)Add at Pos (4)Delete at begin (5)Delete at End (6)Delete at POS (7)Lenght (8)Display (9)Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the Value : ");
                scanf("%d", &value);
                addatbegin(value);
                break;

            case 2:
                printf("Enter the Value : ");
                scanf("%d", &value);
                addatend(value);
                break;

            case 3:
                printf("Enter Pos and Element : ");
                scanf("%d %d", &pos, &value);
                addatpos(value, pos);
                break;

            case 4:
                delatbegin();
                break;

            case 5:
                delatend();
                break;

            case 6:
                printf("Enter the Position : ");
                scanf("%d", &pos);
                delatpos(pos);
                break;

            case 7:
                lenght();
                break;
            
            case 8:
                display(1);
                break;

            case 9:
                exit(1);

            default:
                printf("Enter a Valid Choice\n");
        }
    }

    return 0;
}