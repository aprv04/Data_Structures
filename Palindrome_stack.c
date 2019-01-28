/*Write a function is_palindrome which takes a string as argument and
returns 1 if True,0 if False.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int top=-1;

void push(char);
char pop(void);
char string[50];
int is_palindrom(char *);

int main()
{
	int a;
	printf("Enter the string:");
	scanf("%s",string);

	a=is_palindrom(string);
	
	
	if(a != 0)
		printf("String is palindrom\n");
	else
		printf("String is not palindrom\n");
	
	
return 0;
}

int is_palindrom(char *string)
{
	
	int i,length=0;
	char rev_string[50];
	length=strlen(string);

	for(i=0;i<length;i++)
		push(string[i]);

	for(i=0;i<length;i++)
		rev_string[i]=pop();
	
	if(strcmp(rev_string,string) == 0)
	{
             return 1;
	}
	else
	     return 0;
}

void push(char ch)
{
 	if(top==50)
	 {
		printf("Stack is overflow\n");
		
	 }
	 top++;
	 string[top]=ch;
}

char pop(void)
{
	if(top==-1)
	{
		printf("Stack is underflow no element to pop\n");

		//return 0;
	}
	
        return (string[top--]);
}
