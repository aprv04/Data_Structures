/*Write a function “bubble_sort” to implement Bubble sort. Pass array
“arr” and size “n” as arguments from main.*/
#include<stdio.h>

int bubble_sort(int arr[], int n)

{
 int i,j,temp;
 int swapflag;
      for(j=0;j<(n-1);j++)
      {
	swapflag=0;
         for(i=0;i<((n-j)-1);i++)
           {
              if(arr[i]>arr[i+1])
                {
                   swapflag=1;
                   temp=arr[i];
		   arr[i]=arr[i+1];
		   arr[i+1]=temp;
                }
           }
		if(swapflag==0)
      			break;
       }
return 0;
}
int bubble_sort(int arr[], int n);
int main()
{
  int n,i;
  
    printf("Enter no. of elements--");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements-");
    for(i=0;i<n;i++)
         {
           scanf("%d",&arr[i]);
         }
    printf("The sorted array is-");
      bubble_sort(arr, n);
        for(i=0;i<n;i++)
         {
          printf("%d ",arr[i]);
         }
        printf("\n");
return 0;
}
