/*Write a program to implement Queue using Linked List.*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *ptr;
}*front,*rear,*temp,*front1;

void enqueue(int );
void dequeue();
void display();
void create();

int count=0;

int main()
{

	int val,ch, a;
	
	
create();
	
	while(1)
	{
		printf("\n1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:printf("Enter the data: ");
				scanf("%d",&val);
				enqueue(val);break;

			case 2:dequeue();break;

			case 3:display();break;

			case 4:exit(0);

			default:printf("Wrong choice\n");
		}
	}
return 0;
}

void create()
{
	front=rear=NULL;
}

void enqueue(int val)
{
	if(rear == NULL)
	{
		rear=(struct node *)malloc(sizeof(struct node));
		rear->ptr=NULL;
		rear->data=val;
		front=rear;
	}

	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		rear->ptr=temp;
		temp->data=val;
		temp->ptr=NULL;
		rear=temp;
	}
	count ++;
}

void dequeue()
{
	front1 = front;

	if(front1 == NULL)
	{
		printf("Queue is empty\n");
		return;
	}

	else if(front1->ptr != NULL)
	{
		front1=front1->ptr;
		printf("Dequeued value is %d\n",front->data);
		free(front);
		front=front1;
	}

	else
	{
		printf("Dequeued value is %d\n",front->data);
		free(front);
		front=NULL;	
		rear=NULL;
	}
	count--;
}

void display()
{
	front1=front;

	if((front1==NULL) && (rear==NULL))
	{
		printf("Queue is Empty\n");
		return;
	}

	while(front1 != rear)
	{
		printf("%d  ",front1->data);
		front1=front1->ptr;
	}

	if(front1 == rear)
 		printf("%d  ",front1->data);

	printf("\n");

}


		
