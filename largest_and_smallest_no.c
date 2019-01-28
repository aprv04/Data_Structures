/*Write a program to fnd largest and smallest of n numbers without
sorting.*/

#include<stdio.h>
int main()
{
int n,i;
 printf("Enter no. of elements--");
 scanf("%d",&n);
 int a[n];
  printf("The elements of array are--");
  for(i=0;i<n;i++)
	{
          scanf("%d",&a[i]);
        }
         int largest=a[0];
    for(i=0;i<n;i++)
         {
            if(a[i]>largest)
             {
		largest=a[i];
		i++;
	     }
	 }
 printf("Largest no is--%d\n",largest);
	 int smallest=a[0];
    for(i=0;i<n;i++)
         {
            if(a[i]<smallest)
             {
		smallest=a[i];
		i++;
	     }
	 }
  printf("smallest no is--%d\n",smallest);

return 0;
}

