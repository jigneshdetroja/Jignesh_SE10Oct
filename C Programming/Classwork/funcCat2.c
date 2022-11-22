#include<stdio.h>

void evenOdd(int n1)
{
	if(n1%2==0)
	{
		printf("\nIt is Even");
	}
	else
	{
		printf("\nIt is Odd");
	}
}
void main()
{
	int a=52;
	evenOdd(a);
}