/*Write C program to sort 'n' numbers using Heap Sort.*/

#include<stdio.h>
void heap_sort(int [], int);
void max_heapify(int [],int);
int main()

	
{
	int n;
	int i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	max_heapify(arr,n);
	printf("The max heap is: ");
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
	printf("The sorted array is: ");
	heap_sort(arr, n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
		printf("\n");
return 0;
}

void max_heapify(int arr[], int n)
{
	int p,root,temp,i;
	for(i=0;i<n;i++)
	{
		p=i;
		do
		{
			root=(p-1)/2;
			if(arr[root] < arr[p])
			{
				temp=arr[root];
				arr[root]=arr[p];
				arr[p]=temp;
			}
			p=root;
		}while(p!=0);
	}
}

void heap_sort(int arr[],int n)
{
	int temp,i;
	for(i=n-1;i>=0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		max_heapify(arr,i);
	}
}
