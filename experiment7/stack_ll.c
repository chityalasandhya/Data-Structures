#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *Top = NULL;
void push(struct node **,int);
int pop(struct node **);
void Traversal(struct node *);
int main(){
	int choice, want_continue, data;
	printf("Enter choice:1.Push,2.Pop,3.Traversal\n");
	do{
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter element:");
			       scanf("%d",&data);
			       push(&Top,data);
			       break;
			case 2:data = pop(&Top);
			       printf("%d\n",data);
			       break;
			case 3:Traversal(Top);
			       break;
		}
		printf("Want to continue, enter 1:");
		scanf("%d",&want_continue);
	}while(want_continue == 1);
	return 0;
}

void push(struct node **Top, int data){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = *Top;
	(*Top) = temp;
}

int pop(struct node **Top){
	struct node *temp;
	int data;
	temp = *Top;
	if(*Top == NULL){
		printf("Underflow\n");
		exit(0);
	}
	else{
		temp = *Top;
		data = temp -> data;
		(*Top) = (*Top) -> next;
		temp -> next = NULL;
		free(temp);
		return data;
	}
}
void Traversal(struct node *Top){
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp = Top;
        while(temp != NULL){
                        printf("%d\t",temp->data);
                        temp = temp -> next;
                }
   }
