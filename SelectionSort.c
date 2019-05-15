#include <stdio.h>
#include<stdlib.h>

void SelectionSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int iMin = i;
        for(int j= i+1; j<n; j++)
        {
            if(a[j]<a[iMin])
            {
                iMin = j;
            }
            int temp = a[i];
            a[i] = a[iMin];
            a[iMin] = temp;
        }
    }
    printf("Your Sorted list is: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
int main()
{
   int n;
   printf("Enter the number of elements in the arry \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements of your array: \n");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Your unsorted Array is: \n");
   for(int i=0; i<n; i++)
   {
       printf("%d",a[i]);
   }
   printf("\n");
   SelectionSort( a, n);
   
   return 0;
}
