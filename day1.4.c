/*4. Write a program to swap two pointers.
◦
◦
Write a function 'swap' which takes two arguments as integer
pointers and doesn't return any thing. Swap the contents of these
two pointers in 'swap' function.
Print the contents of two pointers in main before & after call of
'swap' function.*/

#include<stdio.h>

void swap(int *, int *);

int main()
{
   int a,b;
     printf("Enter two values a and b which you want to swap--");
     scanf("%d%d",&a,&b);
     printf("a is %d,b is %d\n",a,b);
     swap(&a,&b);
     printf("a is %d,b is %d\n",a,b);
return 0;
}

void swap(int *p,int *q)
{
    int temp;
     temp=*p;
      *p=*q;
      *q=temp;
}
