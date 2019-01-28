
/*Implement a doubly linked list program with functions:
insert_at_beg, insert_at_end, delete_at_beg, delete_at_end & search.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
	struct node *next;
	struct node *prev;
};

struct node *list(struct node *head);
void display(struct node *head);
void search(struct node *head,int item);
struct node *insert_beg(struct node *, int);
struct node *insert_end(struct node *, int);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

int main()
{
	struct node *head=NULL;
	int choice,val,item;
	while(1)
	{
       		
	printf("\n1.Insert from beg\t2.Insert from end\t3.Delete from beg\t4.Delete from end\t5.Search an element\t6.Display\t0.EXIT \n");
	printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			case 1: printf("enter the element to be inserted: ");
				scanf(" %d", &val);
				head=insert_beg(head,val);
				break;
			case 2: printf("enter the element to be inserted: ");
				scanf("%d",&val);
				head=insert_end(head,val);
						break;
			case 3:head=delete_beg(head);
						break;
			case 4:head=delete_end(head);
						break;
			case 5:printf("enter the element to be searched: ");
				scanf("%d",&val);
				search(head,val);
						break;
			case 6:display(head);
 				       break;
			case 0:exit(0);
			default:printf("****wrong choice ****\n");
		}
	}
return 0;
}

struct node *insert_beg(struct node *head ,int val)
{

	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	temp->prev=NULL;

	if(head==NULL)
	{
		head=temp;
		return head;
	}
	temp->next=head;
	head->prev=temp;
	head=temp;
return head;
}

struct node *insert_end(struct node *head ,int val)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	temp->prev=NULL;

	if(head==NULL)
	{
		head=temp;
		return head;
	}
	p=head;
	while(p->next != NULL)
		p=p->next;
	p->next=temp;
	//temp->next=NULL;
	temp->prev=p;
return head;
}

struct node *delete_beg(struct node *head)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is Empty\n");
		return head;
	}

	temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
return head;
}

struct node *delete_end(struct node *head)
{
	struct node *temp,*p;
	if(head==NULL)
	{
		printf("List is Empty\n");
		return head;
	}
	
	p=head;
	while(p->next != NULL)
	{
		temp=p;
		p=p->next;
	}

	free(temp->next);
	temp->next = NULL;
	
	return head;
}

void search(struct node *head,int item)
{
	struct node *p;
	p=head;
   

	while(p!=NULL)
	{
   		if(p->data==item)
         	{
            		printf("element %d found\n",item);
	 		return;
		}
  		p=p->next;
  
 	}
	printf("Element %d not found \n",item);
}



{
	struct node *p;
	p=head;
	if(head==NULL)
	{
   		printf("list is empty\n");
		return;
   	}
		printf("list is:\n");
	
  		while(p!=NULL)
		{
			printf("%d\t",p->data);
                        p=p->next;
                }
        printf("\n\n");

  }
  


              
