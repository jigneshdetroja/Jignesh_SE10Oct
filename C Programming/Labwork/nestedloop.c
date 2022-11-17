#include<stdio.h>

void main()

{
	int i,j;
	
	for(i=2;i<=10;i++)
	{
		printf("\nTable of %d" ,i);
		printf("\n-----------");
		for(j=1;j<=10;j++)
		{
			printf("\n%d X %d = %d" ,i,j,i*j);
		}
        printf("\n");
		
	}
}