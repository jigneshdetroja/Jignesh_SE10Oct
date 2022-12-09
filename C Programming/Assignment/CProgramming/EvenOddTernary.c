#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter int number\n");
	scanf("%d", &n);
	
	(n%2==0)?
	(printf("%d is Even number\n", n)) : (printf("%d is Odd numbern", n));
	
	return 0;
}