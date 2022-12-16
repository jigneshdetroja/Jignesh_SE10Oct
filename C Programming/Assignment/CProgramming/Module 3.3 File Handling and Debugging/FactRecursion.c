#include<stdio.h>
int fact(int n);
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("\nFactorial of the given number is %d = %d", n,fact(n));
}

int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
		return 1;
}