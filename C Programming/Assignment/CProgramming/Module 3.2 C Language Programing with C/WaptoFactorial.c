#include<stdio.h>
void main()
{
	int i=1, fact=1, num;
	printf("Enter the Number : ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of number %d is %d ", num,fact);
	
}