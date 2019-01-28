/*Create Binary Search Tree(BST) with the following functions
1. insert_into_bst
2. deletion_from_bst
3. fnd_in_bst
4. fnd_min_in_bst
5. fnd_max_in_bst*/


#include<stdio.h>
#include<stdlib.h>

struct node
{  
	int val;
  struct node *left;
  struct node *right;
};

struct node* delete_from_bst(struct node *,int);
struct node* insert_into_bst(struct node *,int);
struct node* fnd_in_bst(struct node *,int);
int fnd_min_in_bst(struct node *);
int fnd_max_in_bst(struct node *);
void inorder(struct node*);

int main()
  {
 	int n,num,i,data,min,max,ch;
        struct node *root=NULL;

   		do{
        
			printf("1.INSERT INTO BST");
			printf("\t 2. DELETE FROM BST");
			printf("\t 3.FIND ELEMENT FROM BST ");
			printf("\t 4.MINIMUM IN BST");
			printf("\t 5.MAXIMUM IN BST");
		        printf("\t 6.DISPLAY");
			printf("\t 7.EXIT\n");
			
	
   			printf("enter the choice :");
   			scanf("%d",&ch);
 		 switch(ch)
   			{
				case 1: printf("enter the number ");
 					scanf("%d",&n);
					for(i=0;i<n;i++)
					{
						printf("enter the elements: ");
 					 	scanf("%d",&num);
 						root=insert_into_bst(root,num);
					}
						//print(root);
						break;
        			case 2: printf("enter the number you want to delete : ");
 					scanf("%d",&data);
					root=delete_from_bst(root,data);
					break;
        			case 3:  printf("enter the number you want to find: ");
 						scanf("%d",&data);
				 		if(fnd_in_bst(root,data))
						printf("element is found \n");
  						else
 						printf("element is not found \n");break;



        			case 4: min=fnd_min_in_bst(root);
                                        printf("the minimum number is %d",min);break;
        			case 5: max=fnd_max_in_bst(root);
                                        printf("the maximum number is %d",max);break;
				case 6: inorder(root);printf("\n\n");
                                        break;
       			        case 7: exit(0);
      				
			default:printf("wrong choice plz enter correct choice \n");break;

			}
		}while(ch>0);
printf("\n");

return 0;
}


struct node *insert_into_bst(struct node*root ,int data)
{
           		if(root==NULL)
			{
				struct node *temp=(struct node*)malloc(sizeof(struct node));
				temp->val=data;
 				temp->left=temp->right=NULL;
				root = temp;
			}
				 if(data < root->val)			
					root->left=insert_into_bst(root->left,data);
 			        else if(data > root->val)
				     	root->right=insert_into_bst(root->right,data);
                                return root;

			
	 
	    }


struct node* fnd_in_bst(struct node *root,int key)
	{  
              if(root==NULL ||root->val==key)
     		return root;
              if(key<root->val)
		return fnd_in_bst(root->left,key);
               if(key>root->val)
		return fnd_in_bst(root->right,key);

	}

struct node* delete_from_bst(struct node *root,int data)
		{
				if(root==NULL)
 				return root;
 				if(data<root->val)
              			root->left=delete_from_bst(root->left,data);
                           	else if(data> root->val)
 				root->right=delete_from_bst(root->right,data);
					else
						{
  							if(root->left==NULL)
							{
 							 struct node* temp=root->right;
							  free(root);
							 return temp;
							}
					    		else
							{
								struct node*temp=root->right;
                                                                free(root);
								return temp;
							} 							}							
					return root;


  		}


int fnd_min_in_bst(struct node *root)
 	{

            struct node *current=root;
 	    while(current->left!=NULL)
	
			current=current->left;
                         return current->val;
 

  	 }

int fnd_max_in_bst(struct node *root)
        {
 		struct node *current=root;
 	    	while(current->right!=NULL)
	
			current=current->right;
                         return current->val;

		
	}

void inorder(struct node *root)
{
  if(root != NULL)
  {
  	inorder(root->left);
	printf("  %d  ",root->val);
	inorder(root->right);
  }
}
		
  

