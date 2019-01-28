/*Implement a Circular Queue using array implementation with
functions: enqueue, dequeue. Write a function display_queue to print
all elements.*/


#include<stdio.h>
#include<stdlib.h>
#define size 6

void cenqueue(int [],int);
void cdequeue(int []);
void display_cqueue();

int front=-1;
int rear=-1;

int main()
{
	int n,ch,element;
	int cqueue[size];

	do
	{
		printf("\nCircular queue\n1.cenqueue\t2.cdequeue\t3.Display cqueue\t4.exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("Enter the element: ");
			       scanf("%d",&n);
				cenqueue(cqueue,n);break;

			case 2:cdequeue(cqueue);
			      // printf("The deleted element is %d: \n",element);break;

			case 3:display_cqueue();break;

			case 4:exit(0);

		default:printf("Wrong choice\n");
		}

	} while(ch!=4);
return 0;

}

void cenqueue(int cqueue[], int element)
{
	if(front==rear+1 ||rear==size-1)
		printf("\nCircular queue is full\n");

	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		cqueue[rear]=element;
	}

	else if(rear==size-1)
	{
		rear=0;
		cqueue[rear]=element;
	}

	else
	{
		rear++;
		cqueue[rear]=element;
	}
}

void cdequeue(int cqueue[])
{
	int element;

	if(front==-1 && rear==-1)
	{
		printf("Cicular queue is empty\n");
	}

	else if(front==rear)
	{
		element=cqueue[front];
		printf("The deleted element is: %d \n",element);
		front=rear-1;
	}

	else if(front==size-1)
	{
		element=cqueue[front];
		printf("The deleted element is: %d \n",element);
		front=0;
	}

	else
	{
		element=cqueue[front];
		printf("The deleted element is: %d \n",element);
		front++;
	}
}

void display_cqueue()
{
	int i;
	printf("\n");
	if(front>rear)
	{
		for(i=front;i<size;i++)
		{
			printf("%d  ",cqueue[i]);
		}

		for(i=0;i<=rear;i++)
		{
			printf("%d  ",cqueue[i]);
		}
	}

	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d  ",cqueue[i]);
		}
	}
   printf("\n");
}
