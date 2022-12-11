#include<stdio.h>

void main()
{
	char i,b,k=1;
	for(i = 1; i <= 5 ; i++)
	{
		for(b = 1; b <= i; b++)
		{
			printf("%c ",b+64);
		}
		printf("\n");
	}
	
}