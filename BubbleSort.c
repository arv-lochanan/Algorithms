#include <stdio.h>
#include<stdlib.h>

void BubbleSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int flag = 0;
        for(int j = 0; j < (n-i); j++)
        {
            if(a[j]>a[j+1])
            {
            	int temp = a[j];
            	a[j] = a[j+1];
            	a[j+1] = temp;
            	flag = 1;   
            }
        }
        if(flag == 0)
        { break; }
    }
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
   BubbleSort( a, n);
   
   return 0;
}
