#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head=NULL;

void create(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	 head=newnode;
	else{
		struct node *t=head;
		while(t->next!=NULL)
		 t=t->next;
		t->next=newnode;
	}
}

void inFirst(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	 head=newnode;
	else
	 {
	 	newnode->next=head;
	 	head=newnode;
	 }
}

void inLast(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	 head=newnode;
	else{
		struct node *t=head;
		while(t->next!=NULL)
		 t=t->next;
		t->next=newnode;
	}
}

void inMiddle(int val,int pos){
	int i;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	 head=newnode;
	else{
		struct node *f=head,*p;
		for(i=1;i<pos;i++)
		{
			p=f;
			f=f->next;
		}
		p->next=newnode;
		newnode->next=f;
	}
}

void display(){
	if(head==NULL)
	 printf("Linked list is empty\n");
	else{
		struct node *t=head;
		while(t!=NULL){
			printf("%d-->",t->data);
			t=t->next;
		}
		printf("NULL");
	}
}

void delFirst(){
	if(head==NULL)
	 printf("List is empty\n");
	else{
		struct node *t=head;
		head=head->next;
		free(t);
	}
}

void delLast(){
	if(head==NULL)
	 printf("List is empty\n");
	else if(head->next==NULL){
		struct node *t=head;
		head=head->next;
	    free(t);	
	}
	else{
		struct node *f=head,*p;
		while(f->next!=NULL){
			p=f;
			f=f->next;
		}
		p->next=NULL;
		free(f);
	}
}

void delMiddle(int pos){
	int i;
	if(head==NULL)
	 printf("List is empty\n");
	else{
		struct node *f=head,*p;
		for(i=1;i<pos;i++){
			p=f;
			f=f->next;
		}
		p->next=f->next;
		free(f);
	}
}

void reverse(struct node *t){
	if(t!=NULL){
		reverse(t->next);
		printf("%d ",t->data);
	}
}

void search(int key){
	struct node *t;
	for(t=head;t!=NULL;t=t->next){
		if(key==t->data){
			printf("key found");
			break;
		}
	}
	if(t==NULL)
	 printf("Key not found");
}

int main(){

	int opt,val,pos,key;

	while(1){

		printf("1.create 2.inFirst 3.inLast 4.inMiddle 5.delFirst 6.delLast 7.delMiddle 8.display 9.reverse 10.search 11.exit\n");
		scanf("%d",&opt);

		switch(opt){
			case 1:
				scanf("%d",&val);
				create(val);
				break;
			case 2:
				scanf("%d",&val);
				inFirst(val);
				break;
			case 3:
				scanf("%d",&val);
				inLast(val);
				break;
			case 4:
				scanf("%d %d",&val,&pos);
				inMiddle(val,pos);
				break;
			case 5:
				delFirst();
				break;
			case 6:
				delLast();
				break;
			case 7:
			    scanf("%d",&pos);
			    delMiddle(pos);
			    break;
			case 8:
				display();
				break;
			case 9:
			    reverse(head);
				break;	
			case 10:
				scanf("%d",&key);
				search(key);
				break;
			case 11:
				exit(0);
			default:
				printf("Enter correct option\n");
		}
	}
	return 0;
}