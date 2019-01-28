/*Write a function “merge_sort” to implement Merge sort. Pass array
“arr” and size “n” as arguments from main.*/

#include<stdio.h>
#include<stdlib.h>

void Merge(int a[],int tmp[],int lpos,int rpos,int rend)
{
	int i,lend,n,tmppos;
	lend=rpos-1;
	tmppos=lpos;
	n=rend-lpos+1;
       		while(lpos<=lend && rpos<=rend)
   			{
				if(a[lpos]<=a[rpos])
					tmp[tmppos++]=a[lpos++];
				else
				tmp[tmppos++]=a[rpos++];
			}
		while(lpos<=lend)
        		tmp[tmppos++]=a[lpos++];
		while(rpos<=rend)
			tmp[tmppos++]=a[rpos++];
  			for(i=0;i<n;i++,rend--)
				a[rend]=tmp[rend];
}

void MSort(int a[],int tmp[],int left,int right)
    {
	int centre;
        if(left<right)
      	{  
		centre=(left+right)/2;
		MSort(a,tmp,left,centre);
 		MSort(a,tmp,centre+1,right);
		Merge(a,tmp,left,centre+1,right);
		 
        }
  }

void MergeSort(int a[],int n)
{
 		int *tmp;
   		tmp=malloc(sizeof(int)*n);
		Msort(a,tmp,0,n-1);
		free(tmp);
}


int main()
{

 int i,n,a[10];
 printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
 for(i=0;i<n;i++)
 {

	scanf("%d",&a[i]);
}

MergeSort(a,n);
printf("the sorted elements ");
for(i=0;i<n;i++)
 
 	printf("%d",a[i]);
         printf("\n");
return 0;
}


