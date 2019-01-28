/*Develop a Singly Linked list implementation of self-adjusting lists. A self-adjusting list is like a regular list, except that all insertions are performed at the front, and when an element is accessed by the Find, it is moved to the front of the list without changing the relative order of the other items. Implement above functionality as self_adjusting_fnd() for singly linked lists.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
 struct node *next;
};

struct node *insert_beg(struct node * ,int );
struct node *self_adjusting_find(struct node*, int);
void display(struct node *head);

int main()
{
	struct node *head=NULL;
	int choice,val,item;
	while(1)
	{
       		
	printf("\n1.INSERT FROM THE BEG\t2.SELF ADJUSTING SEARCH   3.DISPLAY\t0.EXIT \n\n");
              
                printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			
			
			case 1: printf("enter the element to be inserted: ");
				scanf("%d",&val);
				head=insert_beg(head,val);
						break;
			case 2: printf("enter the element to be find: ");
				scanf("%d",&val);
				head=self_adjusting_find(head,val);
						break;
			case 3: display(head);
 				       break;
			case 0: exit(0);
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

struct node *self_adjusting_find(struct node *head, int val)
{
	struct node *temp;
	int flag=0;

	temp=head;
	while(temp->next != NULL)
	{
		if(temp->next->data == val)
		{
			temp->next = temp->next->next;
			head = insert_beg(head,val);
			flag++;
			break;
		}
		temp = temp->next;
	}
	if(flag == 1)
		return head;
	else
		return NULL;
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
		printf("list is:\n");
	
  	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
        }
        printf("\n\n");

}
