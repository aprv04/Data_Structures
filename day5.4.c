/*Implement Searching an element in a list using binary search.*/



#include<stdio.h>
#define NOT_FOUND -1

int binary_search(const int [],int ,int );
int main()
{
	 int index,n,i;
	 int key;

	printf("enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in ascending or descending order:");


	  for(i=0;i<n;i++)
	   {
	     scanf("%d",&arr[i]);
	   }
	 printf("enter the value to be searched: ");
	 scanf("%d",&key);

 
 		index=binary_search(arr,key,n);

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

int  binary_search(const int arr[],int key,int n)
{
		int low,mid,high;
		low=0;
		high=n-1;
		while(low<=high)
		{
		    mid= (low+high)/2;
		    if(arr[mid]<key)
		      { 
			 low=mid+1;
		      }
		     else if(arr[mid]>key)
		     {
			high=mid-1;
		      }
		      else
		      return mid;

}

return NOT_FOUND;
}
