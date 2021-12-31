#include<stdio.h>
#include<stdlib.h>
 struct node
 {
 	int data;
 	struct node *next;
 };
 void insert(struct node **head,int data ,int pos)
 {
 	struct node *p,*q,*temp;
 	int k=1;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp -> data=data;
 	p=*head;
 	if(pos==1)
 	{
 		temp -> next=*head;
 		*head=temp;
	else
 		while((p!=NULL)&&(k<pos))
 		{
 			q=p;
 			p=p->next;
 			k++;
 		}
 		q->next=temp;
 		temp->next=p;
 	}
 		
 }
 void delete(struct node **head,int pos) 
 {
 	struct node *p,*q;
 	int k=1;
 	p=*head;
 	if(pos==1)
 	{
 		*head=(*head) -> next;
 		free(P);
 	}
 }
 	else
 		while(p!=NULL)&&(k<pos)
 		{
 			q=p;
 			p=p->next;
 			k++;
 		}
 		if(p==NULL)
 			printf("Node doesnot exist \n");
 		else
 		{
 			q->next=p->next;
 			free(p);
 		}		
void traversal(struct node *head)
{
	struct node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d \t",p -> data);
		p=p->next;
	}
}
void search(struct node (*head),int key)
{
	struct node*p;
	p=head;
	while(p!=NULL)
	{
		if(p -> data ==key)
			return p;
		p= p -> next;
	}
	return NULL;
}
int data()
{
	int choice,want_continue,pos,data,key;
	printf("enter choice: 1.insert 2.delete 3.traversal 4.search \n");
	struct node *head=NULL,*r;
	do {
		printf("enter choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter value & position \n");
				scanf("%d%d",&data,&pos);
				insert(&data,head,pos);
				break;
			case 2: printf("enter position to delete: \n");
				scanf("%d",&pos);
				delete(&head,pos);
				break;
			case 3:traversal(head);
				break;
			case 4:printf("enter the key value: \n");
				scanf("%d",&key);
				r=search(head,key);
				if(r==NULL);
					printf("unsuccessful search: \n");
					else
					printf("successful search : \n");
					break;
			}
			printf("want to continue,enter 1 \n");
			scanf("%d",&want_continue);
			}while(want_continue==1);
			return 0;
	}

			
				
			
			
			
			
				
			
		
	
	
 		
 	
 	
 	
 	
 	
 	
 	
 
 	
 	
