/*Write a function “selection_sort” to implement Selection Sort. Pass
array “arr” and size “n” as arguments from main.*/

#include<stdio.h>

int selection_sort(int arr[], int n)

{ 
 int i=0,j,temp=0,imin=0;  
       for(j=0;j<n;j++)
        {
           imin=j;
           for(i=(j+1);i<n;i++)
	   {
            if(arr[i]<arr[imin])	         
                imin=i;
            if(j!=imin)
              {
		 
		temp=arr[j];
                arr[j]=arr[imin];
                arr[imin]=temp;
                 
              }     
            } 
        }
return 0;
}
int selection_sort(int arr[], int n);
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
        selection_sort(arr, n);
        for(i=0;i<n;i++)
         {
          printf("%d ",arr[i]);
         }
        printf("\n");
return 0;
}
