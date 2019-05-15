#include <stdio.h>
#include<stdlib.h>

void InsertionSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int value = a[i];
        int hole = i;
        while(hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole-1];
            hole = hole - 1;
        }
        a[hole] = value;
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
   InsertionSort( a, n);
   
   return 0;
}
