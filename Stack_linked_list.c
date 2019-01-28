/*Write a program to implement Stack using Linked List .*/


#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *ptr;
}*top,*top1,*temp;

int topelement();
void push(int val);
void pop();
void isempty();
void display();
void destroy();
void stack_count();
void create();
int count=0;

int main()
{
	int no,ch,a;
	printf("\n1.Push\t2.Pop\t3.Top\t4.Empty\t5.Exit\t6.Display\t7.Stack count\n");

	create();
	while(1)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("Enter data: ");
				scanf("%d",&no);
				push(no);break;

			case 2:pop();break;

			case 3:if(top==NULL)
				printf("Stack is empty\n");
				
				else
				{
					a=topelement();
					printf("Top element is: %d",a);
				}break;

			case 4:isempty();break;

			case 5:exit(0);

			case 6:display();break;

			case 7:stack_count();break;

			default:printf("Wrong choice\n");
		}
	}
return 0;
}

void create()
{
	top==NULL;
}

void stack_count()
{
	printf("The total no. of elements in stack: %d",count);
}

void push(int val)
{
	if(top==NULL)
	{
		top=(struct node *)malloc(sizeof(struct node));
		top->ptr=NULL;
		top->data=val;
	}

	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->ptr=top;
		temp->data=val;
		top=temp;
	}
	
}

void display()
{
	top1=top;
	if(top1==NULL)
	{
		printf("Stack is empty\n");
		return;
	}

	while(top1!=NULL)
	{
		printf("%d  ",top1->data);
                top1=top1->ptr;
	}
}

void pop()
{
	top1=top;
	if(top1==NULL)
	{
		printf("Stack is empty\n");
		return;
	}

	else
	{
		top1=top1->ptr;
		printf("Popped element is: %d",top->data);
		free(top);
		top=top1;
	}
	
}

int topelement()
{
	return(top->data);
}

void isempty()
{
	if(top==NULL)
		printf("Stack is empty\n");
	else
		printf("Stack is not empty and have %d elements\n",count);
}


