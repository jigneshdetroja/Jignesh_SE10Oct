#include<stdio.h>
void main()
{
	int count,num;
	int fact=1;
	
	printf("\nEnter the Number : ");
	scanf("%d", &num);
	
	for(count=1; count<=num; count++)
	{
		fact = fact*count;
	}
	printf("Factorial of %d is : %d",num,fact);
}