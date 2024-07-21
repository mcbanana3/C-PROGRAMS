#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head = NULL, *tail = NULL;

void addatbegin(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(head == NULL){
        head = newNode;
        tail = newNode;
        tail->next = newNode;
    }
    
    else{
        struct node *curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        
    }
}

void lenght(){
    if(head == NULL){
        printf("DLL is Empty\n");
    }

    else{
        struct node *temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        printf("The Number of Nodes are : %d\n", count);
        free(temp);
    }
}

void addatend(int Element){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = Element;

    if(head == NULL){
        newNode->next = head;
        head = newNode;
    }

    else if(head->next == head){
        newNode->next = head;
        head->next = newNode;
    }

    else{
        struct node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        free(temp);
    }
}

void display(){
    if(head == NULL){
        printf("DLL is Empty\n");
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
                //addatpos(value, pos);
                break;

            case 4:
                //delatbegin();
                break;

            case 5:
                //delatend();
                break;

            case 6:
                printf("Enter the Position : ");
                scanf("%d", &pos);
                //delatpos(pos);
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