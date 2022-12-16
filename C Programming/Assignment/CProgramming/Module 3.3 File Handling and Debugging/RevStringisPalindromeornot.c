#include<stdio.h>

void main()
{
	char n,a,s=0,k;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	a=n;
	
	while(n>0)
	{
		k=n%10;
		s=k+(s*10);
		n=n/10;
	}
	
	if(a==s)
	printf("Palindrome Number");
	
	else
	printf("Not");
	
}