/*Write a function “quick_sort” to implement Quick Sort. Pass array
“arr” and size “n” as arguments from main.*/

#include<stdio.h>
void quick_sort(int [], int);
void q_sort(int [],int, int);
int main()

	
{
	  int n;
	  int i;
	    printf("Enter no. of elements--");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter elements-");
	    for(i=0;i<n;i++)
		 {
		   scanf(" %d",&arr[i]);
		 }
	    printf("The sorted array is: ");
	       quick_sort(arr, n);
		for(i=0;i<n;i++)
		 {
		  printf("%d ",arr[i]);
		 }
		printf("\n");
return 0;
}

void quick_sort(int arr[], int n)
{
     
     q_sort(arr,0,n-1);
}

void q_sort(int arr[], int left, int right)
{
		int temp;
		int i,j,pivot,pivot_index;

	if(left<right)
	{
		
                	pivot=arr[right];
			pivot_index=right;
			i=left;
			j=right-1;

		
			while(i<j)
			{
				while((arr[i]<pivot)&&i<=right-1)
					i++;

				while(arr[j]>pivot)
					j--;
				
				if(i<j)
				{
					temp=arr[i];
                          	 	arr[i]=arr[j];
					arr[j]=temp;
				}
				

			}
				
                         temp=arr[pivot_index];
			 arr[pivot_index]=arr[i];
			 arr[i]=temp;
               q_sort(arr,left,i-1);
	       q_sort(arr,i+1,right);              
					
     }
}



				
