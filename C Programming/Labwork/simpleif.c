#include<stdio.h>

void main()

{
	int a;
	printf("\nEnter A : ");
	scanf("%d" ,&a);
	
	if(a>0)
	{
		printf("\n%d is +ve" ,a);
	}
	else
	{
		printf("\n%d is -ve" ,a);
	}
}