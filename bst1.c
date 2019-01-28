/*Create Binary Search Tree(BST) with the following functions
1. insert_into_bst
2. deletion_from_bst
3. fnd_in_bst
4. fnd_min_in_bst
5. fnd_max_in_bst*/

#include<stdio.h>
#include<stdlib.h>
struct bstnode{
  int data;
   struct bstnode *left;
   struct bstnode *right;
};


void *display(struct bstnode *T)
{
   if(T==NULL)
	{
   		printf("list is empty\n");
   	}
		printf("list is:\n");
	
  		while(T->left !=NULL)
			{
                           printf("%d\t",T->left->data);
                            T=T->left;
                         }
		while(T->right !=NULL)
			{
                           printf("%d\t",T->right->data);
                            T=T->right;
                         }



        printf("\n\n");

  }
  
		
//-----------------------------------------------------

struct bstnode *insert(struct bstnode *T,int val)
	{
  		if(T==NULL)
  		{
			T=(struct bstnode *)malloc(sizeof(struct bstnode));
                        T->data=val;
 			T->left=T->right=NULL;
		}

     		else if(T->data>val)
			T->left=insert(T->left,val);
                  
		
 	 	else if(T->data<val)
			T->right=insert(T->right,val);
				return T;
		}

//----------------------------------------------------------

struct bstnode *find_min(struct bstnode * T)
{
		   if(T==NULL)
		   return NULL;
		   while(T->left!=NULL)
		   T=T->left;
		   return T;
}



//--------------------------------------------------------------

struct bstnode *delete(struct bstnode *T,int val)
  {

	struct bstnode *temp;
 	if(T==NULL)
	 printf("element not found");
 	else if (T->data>val)
	T->left=delete(T->left,val);
	else if (T->data<val)
	T->right=delete(T->right,val);
	else if(T->left && T->right)
     		{
			temp=find_min(T->right);
			T->data =temp->data;
			T->right=delete(T->right,T->data);
			}
		else
		{

			temp=T;
			if(T->left==NULL)
			T=T->right;
  			else if (T->right==NULL)
			T=T->left;
			free(temp);
 		}
	 return T;

}

//--------------------------------------------------------------
  
 struct bstnode *find(struct bstnode *T,int val)
{

		 if(T==NULL)
		return NULL;
		else if(val<T->data)
		return find (T->left,val);
		else if (val>T->data)
		return find(T->right,val);
		else
		return T;
}
//-------------------------------------------------------------------

struct bstnode *find_max(struct bstnode *T)
{
		if(T==NULL)
		return NULL;
		while(T->right !=NULL)
		T=T->right;
        	return T;
}
//------------------------------------------------------------------------

int main()
{
		 struct bstnode *temp;
		 struct bstnode *T=NULL;
		 int ch,val;

while(1)
 {
   
    
    printf("1->insert\t 2->delete\t 3->find\t 4->find_min\t 5->find_max\t6->display\t7->exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
		{

		case 1:printf("insert the values:");
		       scanf("%d",&val);
			T=insert(T,val);
			 break;
		case 2: printf("enter the value to delete: ");
			scanf("%d",&val);
			T=delete(T,val);
			break;
		case 3: printf("enter the value to search:");
			scanf("%d",&val);
			T=find(T,val);
		case 4:T=find_min(T);
		       printf("the minimum value is : %d \n",T->data);
			break;
		case 5: T=find_max(T);
			printf("the maximum value is :%d \n ",T->data);
			break;
		case 6: display(T);
                        break;

		case 7:exit(1);

		default: printf("enter the correct choice :");
		 break;
 		}
 }
return 0;
}

