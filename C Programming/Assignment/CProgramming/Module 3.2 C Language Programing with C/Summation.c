#include<stdio.h>
void main()
{
	int n,j,sum=0;
	printf("\nEnter Number : ");
	scanf("%d" ,&n);
	
	while(n>0)
	{
		j=n%10;
		sum=sum+j;
		n=n/10;
	}
	printf("Sum of Number is  : %d",sum);
}