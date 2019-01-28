/*write a program to print the reverse of a linked list*/

#include<stdio.h>
#include<stdlib.h>
struct node{
       int data;
       struct node *next;
   	};
  void display(struct node *H)
     {
      
 	while(H!=NULL)
	{
		printf("%d  ",H->data);
             	H=H->next;
	}
       printf("\n");
    }

 struct node *reverse(struct node *H)
	{
 		struct node *prev,*cur,*nnext;
		prev=NULL;
                cur=H;
 	

        while(cur!=NULL)
	 { 
 	        nnext=cur->next;
		cur->next=prev;
                prev=cur;
		cur=nnext;
            } 
           H=prev;
return H;
  }
struct node *insert_beg(struct node *H ,int val)
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=val;
   temp->next=H;
   H=temp;
return H;
}
int main()
{
   struct node *H=NULL;
   int choice,val;
      
    while(1)
     {
       		
	printf("1.DISPLAY 2.INSERT 3.REVERSE LIST 4.EXIT \n");


		printf("enter your choice :");
  		scanf("%d",&choice);
    
  		switch(choice)
		{
			
			case 1:display(H);
 				       break;
			case 2: printf("enter the element to be inserted:\n");
				scanf("%d",&val);
				H=insert_beg(H,val);
						break;
			case 3: H=reverse(H);
                                              break;
			case 4:exit(1);
                                    break;
                        default:printf("****wrong choice ****");
   		}  
     }
           
return 0;
}
