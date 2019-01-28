/*Write a program to implement Singly Linked lists of integers.
Write function insert_end() to insert an element at end of linked
list. Take Linked List pointer and integer as two arguments.
Write function insert_beg() to insert at beginning of linked list.
Take Linked List pointer and integer as two arguments.
Write function delete_beg() & delete_end() to delete element from
linked list. Take Linked List pointer only as single argument.
Write function search() to search as element in Linked list and
return node address. Return NULL for failed search.
Write function insert_after() to insert an element after above
search() function. Insert element at end for failed search().
Write function display() to print the elements of linked list. Take
Linked List pointer only as single argument.*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
 struct node *next;
};
//ruct node *list(suct node *head);
void display(struct node *head);
void search(struct node *head,int item);
struct node *insert_beg(struct node *head ,int val);
struct node *insert_end(struct node *head,int val);
struct node *delete_beg(struct node *head);
struct node *delete_end(struct node *head);
struct node *insert_after(struct node *head,int val,int item);
int main()
{
  struct node *head=NULL;
  int choice,val,item;
  while(1)
     {
       		
	printf("1.DISPLAY 2.INSERT FROM THE BEGINNING 3.INSERT FROM THE END 4.DELETE FROM THE BEGINNING 5.DELETE FROM THE END 6.INSERT AFTER THE VALUE 7.SEARCH FOR AN ELEMENT  8.EXIT \n\n\n");
              
                printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			
			case 1:display(head);
 				       break;
			case 2: printf("enter the element to be inserted: ");
				scanf("%d",&val);
				head=insert_beg(head,val);
						break;
			case 3: printf("enter the element to be inserted: ");
				scanf("%d",&val);
				head=insert_end(head,val);
						break;
			case 4:/*printf("enter the element to be deleted:");
				scanf("%d",&val);*/
				head=delete_beg(head);
						break;
			case 5:/*printf("enter the element to be deleted:\n");
				scanf("%d",&val);*/
				head=delete_end(head);
						break;
			case 6:printf("enter the value to be inserted : ");
              		       scanf("%d",&val);
				printf("enter the element  after which you want to insert: ");
				scanf("%d",&item);
				head=insert_after(head,val,item);
						break;
			case 7 :printf("enter the element to be searched: ");
				scanf("%d",&val);
				search(head,val);
						break;
			case 8:exit(1);
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
struct node *insert_end(struct node *head ,int val)
{
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=val;
   p=head;
   while(p->next!=NULL)
   
     p=p->next;
     p->next=temp;
     temp->next=NULL;
     
   
return head;
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
void search(struct node *head,int item)
{
	struct node *p;
	p=head;
   int pos=1;
   while(p!=NULL)
{
   	if(p->data==item)
         {
            printf("element %d found in position %d\n",item,pos);
	 	return;
	}
  p=p->next;
  pos++;
 }
printf("item %d not found \n",item);
}
  

struct node *insert_after(struct node *head,int val,int item)
{
  struct node *temp,*p;
   p=head;
  while(p!=NULL)
  {
    if(p->data==item)
      {
        temp=(struct node*) malloc (sizeof(struct node));
        temp->data=val;
        temp->next=p->next;
	p->next=temp;
    return head;
   }

p=p->next;
}
printf("%d not present in the list \n",item);
return head;
}
   
struct node *delete_beg(struct node *head)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  if(head==NULL)
{
  printf("list is empty\n");
  return head;
}
  
    temp=head;
    head=head->next;
   free(temp);
   return head;
  
}

struct node *delete_end(struct node *head)
{
   struct node *temp,*p;
   temp=(struct node *)malloc(sizeof(struct node));
  if(head==NULL)
{
  printf("list is empty\n");
  return head;
} 
     p=head;
  while(p->next!=NULL)
{
   
   
       temp=p->next;
       p->next=temp->next;
       free(temp);
       return head;
   
 p=p->next;
}
 
 return head;
}  






     

   



