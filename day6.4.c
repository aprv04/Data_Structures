/*Write a function “merge_sort” to implement Merge sort. Pass array
“arr” and size “n” as arguments from main.*/

#include<stdio.h>
#include<stdlib.h>

void m_sort(int *arr,int left,int right);
void merge(int *arr ,int mid,int left,int right);
//void merge_sort(int arr [], int n);
int main()
{

 int n,i,left,right;
    printf("Enter no. of elements--");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements-");
    for(i=0;i<n;i++)
         {
           scanf(" %d",&arr[i]);
         }


    printf("The sorted array is: ");
	//merge_sort(arr, n);
	m_sort(arr,0,n);
        for(i=0;i<n;i++)
         {
          printf("%d ",arr[i]);
         }
		printf("\n");
return 0;
}
 
    void m_sort(int *arr,int left,int right)
	{for(int i=left;i<right;i++)
					{
						printf("\nt2\t%d\t%d\t%d", arr[i],left,right);
					}
  	  int mid;
          if (left<right)
		{
		 mid= (left +right)/2;
		m_sort(arr,left,mid);
		m_sort(arr,mid+1,right);
                merge(arr,left,mid,right);
		}
 	}



   void merge(int *arr ,int left,int mid,int right)
		{
 			
			int i=left;
                        int low = left;
			int j=mid+1;
			int k=left;
                        int temp_arr[50];
			while((i<=mid)&&(j<=right))
				{
 					if(arr[i]<arr[j])
					 {
						temp_arr[k]=arr[i];
						k++;
						i++;
                       			}
					else
					{
 						temp_arr[k]=arr[j];
						k++;
						j++;
					}//printf("\nt2\t%d\t%d", arr[i], arr[j]);

				}

                                    
                      if(i>mid)
			{				
	              		//while(i<=mid)
				for(int c=mid;c<=right;c++)
 					{
				          temp_arr[k]=arr[c];
						//i++;
						k++;
			                 }
                         }
                       else
                        {
			       // while(j<right)
				for(int c=low;c<=mid;c++)
    				        {
                                           temp_arr[k]=arr[j];
						k++;
						j++;
				        }
                         }
 				for(int i=left;i<=right;i++)
					{
						arr[i]=temp_arr[i];
					}
				
		}
/*void merge_sort(int arr[],int n)
{  
                            int left=0,right=n;
			   
                               m_sort(arr,left,right);
					   
 }*/	
		
                	
