/*Create a Stack using array implementation with functions: push(),
pop and tos. Write a function display_stack to print all elements.*/


#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display_stack();
int tos();
int main()
{
	int topelement;
  top=-1;
          printf("Enter size of stack:");
	  scanf("%d",&n);
          printf("Stack operations using array\n\n");
	 
	
		do
		{	
			printf("1.Push\t2.Pop\t3.Display\t4.Top of stack\t0.Exit\n");
			printf("Enter the choice.");
     			scanf("%d",&choice);
                 
		switch(choice)
			{
				case 1: push();break;

				case 2: pop();break;

   				case 3: display_stack();break;

				case 4: topelement=tos();
					printf("The top of the stack is: %d\n",topelement);break;

			 	case 0: exit(0);
			   default:printf("Wrong choice choice must be 1/2/3/4\n");
			}
		} while(choice!=0);
return 0;
}

void push()
{
     if(top>=n-1)
             printf("Stack is overflow\n");
     else
          {
	   printf("Enter the value to be entered: ");
	   scanf("%d",&x);
	   top++;
           stack[top]=x;
	  }
}

void pop()
{
    if(top<=-1)
           printf("Stack is empty\n");
     else
	  {
            printf("The popped value is:%d\n",stack[top]);
            top--;
	  }
}

void display_stack()
{
     if(top>=0)
         {
		printf("The elements in stack are: \n");
                 for(i=top;i>=0;i--)
			printf("%d\t",stack[i]);
         }
     else
                printf("The stack is Empty\n");
        printf("\n");
}
          
int tos()
{
	int topelement;
	if(top==-1)
	{
		printf("Stack is underflow \n");
		return 0;
	}
		//topelement=stack[top];
	return stack[top];
		
}


