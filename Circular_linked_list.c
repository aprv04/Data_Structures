/*Write an Implementation of Circular Linked
insert_front, insert_end and display functions.
List.
Implement*/

#include<stdio.h>
#include<stdlib.h>

void insert_at_beg(int);
void insert_at_end(int);
void display();

struct node{
	int data;
	struct node *next;
}*head=NULL;

int main()
{
	int ch,val;
	while(1)
	{
		printf("\n\n1.Insert from beginning\t\t2.Insert at end\t\t3.Display\t4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("Enter data: ");
				scanf("%d",&val);
				insert_at_beg(val);break;

			case 2:printf("Enter data: ");
				scanf("%d",&val);
				insert_at_end(val);break;

			case 3:display();break;

			case 4:exit(0);

			default:printf("Wrong choice\n");
		}
	}
return 0;
}

void insert_at_beg(int val)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=val;

	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}

	else
	{
		struct node *temp=head;
		//newnode->next=head;
		//head=newnode; 
		while(temp->next != head)
		{
		
			
			
			//head=newnode;  			
			temp=temp->next;
		}
		newnode->next=head;
		temp->next=newnode;
		
	}
}

void insert_at_end(int val)
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));

	newnode->data=val;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}

	else
	{
		struct node *temp=head;
		while(temp->next != head)
		{
		
			temp=temp->next;
			
		}
			temp->next=newnode;
			newnode->next=head;
	}
}

void display()
{
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}

	else
	{
		struct node *temp=head;
		while(temp->next!=head)
		{
			printf("%2d",temp->data);
			temp=temp->next;
		}
		printf(" %d  ",temp->data);
	}
}

