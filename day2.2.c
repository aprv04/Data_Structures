/*Write a function print_reverse() for printing the elements of a linked
list in the REVERSE ORDER.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
 struct node *next;
};
struct node *list(struct node *head);
void display(struct node *head);
void print_reverse(struct node *head);
struct node *insert_beg(struct node *head ,int val);

int main()
{
  struct node *head=NULL;
  int choice,val,item;
  while(1)
     {
       	printf("\n\n1.INSERT 2.DISPLAY 3.REVERSE LIST 4.Exit\n");
             printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			case 1: printf("enter the element to be inserted:\n");
				scanf("%d",&val);
				head=insert_beg(head,val);
						break;
			case 2:display(head);
 				       break;
			
          		case 3: print_reverse(head);
                                                break;
			case 4: exit(1);
               default:printf("****wrong choice ****");
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

void display(struct node *head)
{
   if(head==NULL)
	{
   		printf("list is empty\n");
	}
		printf("list is:\n");
	
  		while(head!=NULL)
			{
                           printf("%d\t",head->data);
                            head=head->next;
                         }
        printf("\n");

  }

void print_reverse(struct node *head)

{
        if(head==NULL)
	   return;
	print_reverse(head->next);
	printf("%d\t",head->data);
	
                            
}
        
