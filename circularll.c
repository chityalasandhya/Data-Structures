#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
void insert(struct node **head,int data,int pos)
{
	struct node *temp,*p;
	int k=1;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	p=*head;
	if(pos==1){
		temp->next=*head;
		temp->prev=NULL;
		if(*head)
			(*head)->prev=temp;
		*head=temp;
	}
}
void insert_pos(struct node *head,int data,int pos)
{
		struct node *p,*temp,*q;
		int k=1;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		p=head;
		while(k<pos) {
			q=p;
			p=p->next;
			k++;
		
}
void delete_beg(struct node **head,int pos)
{
	struct node *p,*q;
	if(*head==NULL);
		printf("Empty linked list \n");
		return ;
	}
	if((&head)->next!=*head) {
		*head=NULL;
		free(p);
	}
	else {
		while(p->next!=next!=*head)
			p=p->next;
		*head=(*head)->next;
		p->next=*head;
		free(p);
	}
}
void delete_end(struct node **head)
{
	struct node *p=*head,*q;
	if(*head==NULL);
		printf("Empty linked list \n");
		return;
	}
	else {
		while(p->next!=*head) {
			q=p;
			p=p->next;
		}
		q->next=*head;
		free(p);
	}
}
void delete_pos(struct node **head,int pos)
{
	struct node *p=*head,*q;
	int k=1;
	if(*head==NULL) {
		printf("empty ll");
		return ;
	}
	if((*head)->next=*head);
		
	
	int k=1;
	p=*head;
	if(pos==1){
		*head=(*head)->next;
		if(*head)
			(*head)->prev=NULL;
		free(p);
	}
	else{
	while((k<pos)&&(p->next!=NULL)){
	p=p->next;
	k++;
	}
	if(k!=pos){
		printf("position doesnot exist \n");
		return ;
	}
	q=p->prev;
	q->next=p->next;
	if(p->next)
		p->next->prev=q;
	free(p);
	}
}	
void traversal(struct node *head)
{
	struct node *p;
	p=head;
	while(p!=NULL){
	printf("%d\t",p->data);
	p=p->next;
	}
}
struct node* search(struct node **head,int key)
{	
	struct node *p;
	p=*head;
	while(p!=NULL){
		if(p->data==key)
		return p;
	p=p->next;
}
return NULL;
}
int main()
{
	int choice,want_continue,pos,data,key;
	printf("Enter choice: 1.insert 2.delete 3.traversal 4.search \n");
	struct node *head=NULL,*r;
	do{
	printf("enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter value & position to be inserted:\n");
			scanf("%d %d",&data,&pos);
			insert(&head,data,pos);
			break;
		case 2:
			printf("enter position to be deleted: \n");
			scanf("%d",&pos);
			delete(&head,pos);
			break;
		case 3:
			traversal(head);
			break;
		case 4:
			printf("enter key to be searched: \n");
			scanf("%d",&key);
			r=search(&head,key);
			if(r==NULL)
				printf("unsuccessfull search \n");
			else 
				printf("successful search \n");
			break;
		}
		printf("want to continue: (enter 1) \n");
		scanf("%d",&want_continue);
	}while(want_continue==1);
	return 0;
}


