#include<stdio.h>

void main()
{
	char str[100], temp;
	int i,j=0;
	
	printf("\nEnter The String :");
	gets(str);
	
	i=0;
	j=strlen(str)-1;
	
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("\nReverse Words in String is : %s\n\n",str);
}