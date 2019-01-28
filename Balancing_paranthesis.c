/*Balancing parentheses in an Arithmetic Expression.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int top=-1;
int stack[50];

void push(char element)
{
	if(top==50-1)
	{
		printf("Stack is full\n");
		return;
	}
	top++;
	stack[top]=element;
}

char pop()
{
	if(top==-1)
	{
		printf("Stack is underflow\n");
		exit(1);
	}
	return (stack[top--]);
}

int match_paranthesis(char a,char b)
{
	if(a=='(' && b==')')
	{
		return 1;
	}
	else if(a=='{' && b=='}')
	{
		return 1;
	}
	else if(a=='[' && b==']')
	{
		return 1;
	}
	else
		return 0;
}

int check_paranthesis(char exp[])
{
	int count;
	char temp;
	for(count=0;count<strlen(exp);count++)
	{
		if(exp[count]=='(' || exp[count]=='{' || exp[count]=='[')
		{
			push(exp[count]);
		}
		if(exp[count]==')' || exp[count]=='}' || exp[count]==']')
		{
			if(top==-1)
			{
				
				return 0;
			}
			else
			{
				temp=pop();
				if(!match_paranthesis(temp,exp[count]))
					return 0;
			}
		}
	}

	if(top==-1)
	{
		
		return 1;
	}
	else
	{
		
		return 0;
	}

}

int main()
{
	char exp[50];
	int validity;
	printf("Enter an algebric expression: ");
	scanf("%s",exp);

	validity=check_paranthesis(exp);

	if(validity==1)
	{

		printf("The expression is valid and has balanced paranthesis. \n");

	}
	else
	{
		printf("The exp is invalid and has unbalanced paranthesis.\n");
	}
return 0;
}
