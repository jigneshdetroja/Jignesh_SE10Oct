#include<stdio.h>

void evenOdd(int n1)
{
	if(n1%2==0)
	{
		printf("\nIt is Even");
	}
	else
	{
		printf("\nIt is Odd");
	}
}


void main()
{
	int a,b,choice;
	printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nA = %d, B = %d",a,b);
	printf("\n\nPress 1. Adddition\nPress 2. Substraction\nPress 3. Multiplication\nPress 4. Division");
	printf("\n\nEnter your choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\nAddition : %d",(a+b));
			  break;
		case 2: printf("\nSubstraction : %d",(a-b));
			  break;
		case 3: printf("\nMultiplication : %d",(a*b));
			  break;
		case 4: printf("\nDivision : %.2f",((float)a/b));
			  break;
		default:printf("\nInvalid Choice");
		      break;
		      
	}
}