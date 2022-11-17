#include<stdio.h>

void main()

{
	int i,n;
	printf("\nEnter the Value : ");
	scanf("%d" ,&n);
	
	for (i=1;i<=10;i++)
	{
		printf("\n%d X %d=%d" ,n,i,n*i);
	}
}