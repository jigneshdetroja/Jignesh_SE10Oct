#include <stdio.h>
#define Max_Size 50
void main()
{
   int i, count, arr[Max_Size];
 
   printf("Enter the number of elements you want to sort:");
   scanf("%d", &count);
   printf("\nEnter the numbers:");
   
   for (i = 0; i < count; ++i)
   {
      scanf("%d", &arr[i]);
   }
 
   array_sort_ascending_order(arr, count);
}
void array_sort_ascending_order(int arr[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (arr[j] > arr[k])
         {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
         }
      }
   }
   printf("Array in ascending order now:\n");
   for (i = 0; i < count; ++i)
   {
      printf("%d\n", arr[i]);
   }
}