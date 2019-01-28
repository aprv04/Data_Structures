/*Swap two adjacent elements by adjusting only the pointers(and not the data).(Hint: Create any linked list of n+3 nodes where n ≥ 0.
swap 2 nd and 3 rd nodes)*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
 struct node *next;
};
void display(struct node *);
struct node *insert_beg(struct node * ,int );
void swap(struct node *);

int main()
{
	struct node *head=NULL;
	int choice,val,item;
	while(1)
        {
       		
	printf("\n1.Insert from beg atleast four nodes\t2.Swapping of 2nd and 3rd node\t3.Display\t0.EXIT \n\n");
              
                printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			
			
			case 1: printf("enter the element to be inserted: ");
				scanf("%d",&val);
				head=insert_beg(head,val);
						break;
			case 2:swap(head);
			case 3:display(head);
 				       break;
			case 0:exit(0);
			default:printf("****wrong choice ****\n");	
		}
	}
return 0;
}

struct node *insert_beg(struct node *head ,int val)
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=val;
   temp->next=head;
   head=temp;
return head;
}

void swap(struct node *head)
{
	if(head==NULL)
	{
		printf("List is Empty\n");
		return;
	}

	struct node *temp=head;
	head=head->next;
	temp->next=head->next;
	temp=temp->next;
	head->next=temp->next;
	temp->next=head;
}

void display(struct node *head)
{
	struct node *p;
	p=head;
	if(head==NULL)
	{
   		printf("list is empty\n");
		return;
   	}
	
  	while(p!=NULL)
	{
                printf("%d\t",p->data);
                p=p->next;
        }
        printf("\n\n");

  }
	
