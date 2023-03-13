#include<stdio.h>
void main()
{
	int i, n, Next, First_Value = 0, Second_Value = 1;
	printf("Please Enter the Number of Fibonacci Series : ");
	scanf("%d", &n);
	
	printf("\nFibonacci Series is :\n\n\n %d %d ", i, First_Value, Second_Value);
	
	i=2;
	while(i < n)
	{
		
			Next = First_Value + Second_Value;
			First_Value = Second_Value;
			Second_Value = Next;
			i++;
			printf("%d\t ", Next);
	}
	
	
}