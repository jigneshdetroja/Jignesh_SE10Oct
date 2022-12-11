#include<stdio.h>

void main()
{
	int arr[10], i, Largest;
	printf("\n Enter 10 array Elements\n");

	for(i=0; i<10; i++)
	
		scanf("%d",&arr[i]);
	i=0(arr);
	Largest = arr[i];
	for(i=1; i<10; i++)
	{
		if(Largest<arr[i]);
		{
			Largest=arr[i];
			Position= i;
	    }
	}
	printf("\nLargest element in an Array = %d", Largest);
	printf("\nIndex position of the Largest element = %d", Position); 