#include<stdio.h>

void main()
{
	int no_rows, row, column;
	printf("Enter the number of rows : ");
	scanf("%d",&no_rows);
	
	for(row = 1; row <= no_rows ; row++)
	{
		for(column = 1; column <= row; column++)
		{
			printf("* ");
		}
		printf("\n");
	} 
	
	for(row = no_rows-1; row >= 1; row--)
	{
		for(column = 1; column <= row; column++)
		{
			printf("* ");
		}
		printf("\n");
	}
}