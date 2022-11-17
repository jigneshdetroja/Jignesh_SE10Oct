#include<stdio.h>

void main()

{
	int arr1[5],i;
	int arr2[5]
	for (i=0;i<5;i++)
	{
		printf("Enter Value in Index [%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n----------Accepting Array 1 Elements : ----------\n\n");
	for(i=0;i<5;i++)
	{
		printf("\nValue at Index [%d] : %d",i,arr1[i]);
	}
	
	int arr2[5];i;
	
	for (i=0;i<5;i++)
	{
		printf("Enter Value in Index [%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	printf("\n\n----------Accepting Array 2 Elements : ----------");
	for(i=0;i<5;i++)
	{
		printf("\nValue at Index [%d] : %d",i,arr2[i]);
	}
}
