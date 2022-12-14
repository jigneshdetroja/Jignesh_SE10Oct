#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter int number ");
	scanf("%d", &n);
	
	(n%2==0)?
	(printf("%d is Even number\n", n)) : (printf("%d is Odd number\n", n));
	

}