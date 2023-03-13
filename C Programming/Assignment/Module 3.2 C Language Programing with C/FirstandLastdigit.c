#include<stdio.h>
void main()
{
	int n, sum=0, firstdigit, lastdigit;
	printf("Enter Number = ");
	scanf("%d",&n);
	lastdigit = n % 10;
	while(n >=10)
	{
		n = n / 10;
	}
	firstdigit = n;
	printf("first digit = %d\n", firstdigit);
	printf("last digit = %d\n", lastdigit);
	
}