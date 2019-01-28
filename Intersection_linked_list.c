/*Given two sorted linked lists L1 and L2 by data, perform L1 ∩ L2.
Write a function intersect(L1, L2). Store the result of operation in L3.
(Hint: For simplicity, take unique data elements in both lists).*/

#include<stdio.h>
#include<stdlib.h>

struct node *insert(struct node* , int);
struct node *intersection(struct node*,struct node*,struct node*);
void display(struct node*);

struct node {
       int data;
       struct node *next;
};
    

int main()
{
  
	int ch,val;
	struct node *head,*head1,*head2;
	head=head1=head2=NULL;
	
	while(1)
	{

		printf("\n\n1.Insert 1st sorted list\t2.Insert 2nd sorted list\t3.DISPLAY\t0.Exit\n");
		printf("enter your choice :");
  		scanf("%d",&ch);
    
  		switch(ch)
			{

		       case 1: printf("Enter the data: ");
				scanf("%d",&val);
				head1=insert(head1,val);
				display(head1);break;

			case 2: printf("Enter the data: ");
				scanf("%d",&val);
				head2=insert(head2,val);
				display(head2);break;

			case 3:head = intersection(head1, head2, head);
				display(head);
			        break;
			
			case 0: exit(1);
               default:printf("****wrong choice ****");
                  }
	}
		printf("\n");
return 0;

}

struct node *intersection(struct node *head1,struct node *head2,struct node *head)
{
	struct node *p=head2,*q=head1,*r=NULL,*temp=NULL;
	int flag=0;

	while(q!=NULL)
	{
		p=head1;
		while(p!=NULL)
		{		
			if(p->data = q->data)
				flag++;
				if(flag==1)
				  {     						
   					
					temp=(struct node*)malloc(sizeof(struct node));
                        		temp->data=q->data;                        		
                         		temp->next=NULL;

					if(head==NULL)
					{
		                            head=temp;

					    return head;
					}
		
					else 
					{
		                            r=head;
					    while(r!=NULL)
                                	    r = r->next;
											   
					    r->next=temp;
					    

					    return head;
                        		}
	
				flag=0;
				}
				p=p->next;
		}
			q=q->next;
	}

              
return head;
}

struct node *insert(struct node *head, int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));

		temp->data=val;
		temp->next=NULL;

		if(head==NULL)
		{
			head=temp;
			return head;
		}

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
		printf("list is: ");
	
  		while(head!=NULL)
			{
                           printf("%d\t",head->data);
                            head=head->next;
                         }
        printf("\n\n");

  }




