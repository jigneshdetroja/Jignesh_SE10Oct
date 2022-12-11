#include<stdio.h>

void main()
{
	char str[50],i;
	printf("Enter a String : ");
	scanf("%s",str);
	
	for(i=0; str[i]!='\0'; ++i);
	printf("\nLength of input string: %d",i);
}