/*Write a program to merge two sorted arrays: A of size n, B of size m.
Merge arrays A and B to third array C of size n+m.*/


#include<stdio.h>
void mergearray(int a[],int b[],int n, int m,int c[]);
int main()
{
int n,m,i,k,j;
 printf("Enter the no. of elements for first array-");
 scanf("%d",&n);


 printf("\nEnter the no. of elements for second array-");
scanf("%d",&m);


 int a[n];
 printf("Enter the elements for first array--");
 	for(i=0;i<n;i++)
	    {
 		scanf("%d",&a[i]);
	    }
		     

 int b[m];
 printf("Enter the elements for second array--");
 	 for(j=0;j<m;j++)
              {
 		scanf("%d",&b[j]);
              }

  int num=n+m;
int c[num];
 mergearray(a,b,n,m,c);

		printf("Merged array is--");
		for(k=0;k<(num);k++)
	     {
		 printf(" %d",c[k]);
              }
 
	printf("\n");
  
return 0;
}

void mergearray(int a[],int b[],int n, int m,int c[])
{
int i=0,j=0,k=0;
   while((i<n)&&(j<m))
      { 
            if(a[i]<=b[j])
             {
               c[k++]=a[i++];
             }
            else
              {
               c[k++]=b[j++];
	      }
      }
         while(i<n)
            {
               c[k++]=a[i++];
             }
         while(j<m)
            {
               c[k++]=b[j++];
             }
}
  
