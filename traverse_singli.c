#include<stdio.h>
#include<stdlib.h>
struct node{
			int data;
			struct node *next;
			};
void main()
{
	
	struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->next=NULL;
	//printf("%d\n",head->data);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=98;
	temp->next=NULL;
	head->next=temp;
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=3;
	temp->next=NULL;
	head->next->next=temp;
	traverse(head);

}

void traverse(struct node *head)
{
		
	if(head==NULL)
	
		printf("Linked list is empty");
	
	
	struct node *ptr=NULL;
	
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
