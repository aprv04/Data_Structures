/*Write a function “merge_sort” to implement Merge sort. Pass array
“arr” and size “n” as arguments from main.*/


#include<stdio.h>

void merge_sort(int [],int,int,int);
void m_sort(int [],int,int);

int main()
{
	int arr[50];
	int i,n;
		printf("Enter no. of elements--");
		scanf("%d",&n);

		printf("Enter elements-");
		for(i=0;i<n;i++)
        	 {
           		scanf(" %d",&arr[i]);
         	 }

	m_sort(arr,0,n-1);
	
	printf("The sorted array is: ");
		for(i=0;i<n;i++)
         	{
         	      printf("%d ",arr[i]);
         	}
	printf("\n");

return 0;
}

void m_sort(int arr[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		m_sort(arr,left,mid);
		m_sort(arr,mid+1,right);
		merge_sort(arr,left,mid,right);
	}
}

void merge_sort(int arr[],int left,int mid,int right)
{
	int i,j,k,le,temp[50];
	le=left;
	j=mid+1;
	i=left;
		
		while((le<=mid)&&(j<=right))
		{
			if(arr[le]<=arr[j])
			{
				temp[i]=arr[le];
				le++;
			}
			else
			{
				temp[i]=arr[j];
				j++;
			}
			i++;
		}

		if(le>mid)
		{
			for(k=j;k<=right;k++)
			{
				temp[i]=arr[k];
				i++;
			}
		}

		else
		{
			for(k=le;k<=mid;k++)
			{
				temp[i]=arr[k];
				i++;
			}
		}

		for(k=left;k<=right;k++)
		{
			arr[k]=temp[k];
		}
}

