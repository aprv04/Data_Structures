/*Implement Searching an element from the list using linear search.*/



#include<stdio.h>
int linear_search(int [],int ,int );
int main()
{
 int index,n,i;
 int key;

printf("enter the size of array :");
scanf("%d",&n);
int arr[n];
printf("enter the elements:");


  for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
 printf("enter the value to be searched: ");
 scanf("%d",&key);
 
 index=linear_search(arr,key,n);
 		if(index>0)
		{
			printf("Element found in location in %d: \n",index);
		}
		else
		{
                        printf("Element not found\n");
		}
return 0;
}

int linear_search(int arr[],int key,int n)
{
     for(int i=0;i<n;i++)
        {
           if(arr[i]==key)
	    return i;
	}
            return -1;
}
