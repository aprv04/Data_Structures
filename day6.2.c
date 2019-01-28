/*Write a function “insertion_sort” to implement Insertion Sort. Pass
array “arr” and size “n” as arguments from main.*/
#include<stdio.h>

void insertion_sort(int arr[], int n)

{
 int i,p;
 int temp;
 
  for(p=1;p<n;p++)
     {
       temp=arr[p];
        for(i=p;i>0&&arr[i-1]>temp;i--)
          {
             arr[i]=arr[i-1];
	  }
	     arr[i]=temp;      
     }  
}
int main()
{
  int n,i;
    printf("Enter no. of elements--");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements-");
    for(i=0;i<n;i++)
         {
           scanf(" %d",&arr[i]);
         }

    printf("The sorted array is: ");
	insertion_sort(arr, n);
        for(i=0;i<n;i++)
         {
          printf("%d ",arr[i]);
         }
		printf("\n");
return 0;
}
































































































































































