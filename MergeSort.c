#include <stdio.h>
#include<stdlib.h>

void Merge(int *a,int *l,int lCnt,int *r,int rCnt)
 {
	int i = 0,j = 0,k = 0;
	while(i<lCnt && j< rCnt) 
	{
		if(l[i]  < r[j])
		{
			a[k++] = l[i++];
		}
		else 
		{
			a[k++] = r[j++];
		}
	}
	while(i < lCnt)
	{
		a[k++] = l[i++];
	}
	while(j < rCnt)
	{
		a[k++] = r[j++];
	}
}

void MergeSort(int *a,int n) 
{
	int mid,i, *l, *r;
	if(n < 2)
	{
		return;
	}  
	mid = n/2;  
	l = (int*)malloc(mid*sizeof(int)); 
	r = (int*)malloc((n- mid)*sizeof(int)); 

	for(i = 0; i < mid; i++)
	{
		l[i] = a[i];
	} 
	for(i = mid; i < n; i++)
	{
		r[i-mid] = a[i];
	}
	MergeSort(l, mid);
	MergeSort(r, n-mid);
	Merge(a, l, mid, r, n-mid);
	free(l);
	free(r);
	printf("Your Sorted array is: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

int main()
{
   int n;
   printf("Enter the number of elements in the array \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements of your array: \n");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Your unsorted array is: \n");
   for(int i=0; i<n; i++)
   {
       printf("%d",a[i]);
   }
   printf("\n");
   MergeSort(a, n);
   return 0;
}
