/*Write a non recursive routine to insert an element in binary search
tree.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{  
	int val;
  struct node *left;
  struct node *right;
};
struct node* insert_into_bst(struct node *,int);
void inorder(struct node*);

int main()
{
 	int n,num,i,data,min,max,ch;
        struct node *root=NULL;

		printf("INSERT INTO BST\n");
		printf("enter the number ");
 		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		printf("enter the elements: ");
 		scanf("%d",&num);
 		root=insert_into_bst(root,num);
		}

	inorder(root);
	printf("\n\n");

return 0;
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
		
  
struct node *insert_into_bst(struct node*root ,int data)
{
	struct node *curr,*parent;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->val=data;
	curr=root;
	parent=NULL;
			if(root==NULL)
			{
				root=temp;
				return root;
			}
		while(curr != NULL)
		{
			parent=curr;
		
			if(data < curr->val)
				curr=curr->left;
			else
				curr=curr->right;
		}

	if(data < parent->val)
		parent->left=temp;
	else
		parent->right=temp;

return root;
}


