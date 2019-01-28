/*1. Add following functions to Binary Search Tree(BST)
 height_of_tree
 mirror_image
 number_of_ nodes
 inorder_traversal
 preorder_traversal
 postorder_traversal*/

#include<stdio.h>
#include<stdlib.h>

struct node
{  
	int val;
  struct node *left;
  struct node *right;
};
struct node* insert_into_bst(struct node *,int);
int height_of_tree(struct node *);
void mirror_image(struct node *);
int number_of_nodes(struct node *);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

int main()
{
	int n,num,i,data,ch,height,count;
        struct node *root=NULL;

		do
		{
        
			printf("\n1.Insert into BST");
			printf("\t2.Height of Tree");
			printf("\t3.Miroor image of tree");
			printf("\t4.Number of nodes");
			printf("\t5.Inorder display");
		        printf("\t6.Preorder display");
			printf("\t7.Postorder display");
			printf("\t0.Exit\n");
			
	
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
						break;
				case 2:height=height_of_tree(root);
					printf("The height of tree is: %d\n",height);
					break;

				case 3:mirror_image(root);
					break;
				case 4:count=number_of_nodes(root);
					printf("The no. of nodes in tree are: %d\n",count);
					break;
				case 5:inorder(root);printf("\n\n");
                                        break;
				case 6:preorder(root);printf("\n\n");
                                        break;
				case 7:postorder(root);printf("\n\n");
                                        break;
				case 0:exit(0);
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

int height_of_tree(struct node *root)
{
	if(root==NULL)
		return 0;
	static int max_left=0, max_right=0;
	
	if(root->left != NULL)
	{
		max_left++;
		height_of_tree(root->left);
	}
	if(root->right != NULL)
	{
		max_right++;
		height_of_tree(root->left);
	}
	if(max_left > max_right)
	return (1+max_left);
	else
	return (1+max_right);
}


void mirror_image(struct node *root)
{
	if(root==NULL)
	return;
	else
	{
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		mirror_image(root->left);
		mirror_image(root->right);
		
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
}


int number_of_nodes(struct node *root)
{
	int c=1;
	if(root==NULL)
	return 0;
	else
	{
		c+=number_of_nodes(root->left);
		c+=number_of_nodes(root->right);
		return c;
	}
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

void preorder(struct node *root)
{
  if(root != NULL)
  {
	printf("  %d  ",root->val);
  	inorder(root->left);
	inorder(root->right);
  }
}

void postorder(struct node *root)
{
  if(root != NULL)
  {
  	inorder(root->left);
	inorder(root->right);
	printf("  %d  ",root->val);
  }
}	
					

