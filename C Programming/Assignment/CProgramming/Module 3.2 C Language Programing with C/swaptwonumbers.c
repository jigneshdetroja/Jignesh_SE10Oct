#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("Before swapping first number is %d and second number is %d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Before swapping first number is %d and second number is %d"	,a,b);

}