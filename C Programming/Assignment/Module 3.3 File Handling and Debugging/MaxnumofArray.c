#include<stdio.h>

void main()
{
	int array[] = {10,25,9,56,85};
	
	int length = sizeof(array)/sizeof(array[0]);
	
	int max = array[0];
	
	for (int i = 0; i < length; i++)
	{
		if(array[i] > max)
		max = array[i];
	}
	printf("Maximum number of given in array is : %d\n",max);
}