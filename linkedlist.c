#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head = NULL;

void create(int val){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *t=head;
        while(t->next != NULL){
            t=t->next;
        }
    }
}

void infirst(int val){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void inlast(int val){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *t=head;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = newnode;
    }
}

void inmiddle(int val, int pos){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *f = head, *p;
        for (int i = 0; i < pos; i++)
        {
            p = f;
            f = f->next;
        }
        p->next = newnode;
        newnode->next = f;
    }
}

void display(){
    if(head == NULL){
        printf("List is Empty\n");
    }
    else{
        struct node *t = head;
        while (t != NULL)
        {
            printf("%d-->", t->data);
            t = t->next;
        }
        //printf("NULL\n");
    }
}

void delfirst(){
    if(head == NULL){
        printf("List is Empty\n");
    }
    else{
        struct node *t = head;
        head = head->next;
        free(t);
    }
}

void dellast(){
    if(head == NULL){
        printf("List is Empty\n");
    }

    else if(head->next == NULL){
        struct node *t = head;
        head = head->next;
        free(t);
    }

    else{
        struct node *f = head, *p;
        while (f->next != NULL)
        {
            p = f;
            f = f->next;
        }
        p->next = NULL;
        free(f);
    }
}

void delmiddle(int pos){
    if (head == NULL)
    {
        printf("Linked List is empty\n");
    }

    else{
        struct node *f = head, *p;
        for (int i = 0; i < pos; i++)
        {
            p = f;
            f = f->next;
        }
        p->next = f->next;
        free(f);
    }
}

int main(){

    int pos, val, opt;
    
    while (1)
    {
        printf("1.Create 2.Infirst 3.Inlast 4.Inmiddle 5.delfirst 6.delast 7.delmiddle 8.display 9.exit\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            scanf("%d", &val);
            create(val);
            break;
        
        case 2:
            scanf("%d", &val);
            infirst(val);
            break;

        case 3:
            scanf("%d", &val);
            inlast(val);
            break;

        case 4:
            scanf("%d %d", &val, &pos);
            inmiddle(val, pos);
            break;

        case 5:
            delfirst();
            break;

        case 6:
            dellast();
            break;

        case 7:
            scanf("%d", &pos);
            delmiddle(pos);
            break;

        case 8:
            display();
            break;

        case 9:
            exit(1);
        
        default:
            printf("ERROR\n");
            break;
        }
    }

    return 0;
    
}