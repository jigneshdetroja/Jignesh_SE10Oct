#include<stdio.h>
void main()
{
	float a,b,c,max;
	printf("Enter 3 Numbers separated by spaces : ");
	scanf("%f%f%f",&a,&b,&c);
	max = a;
	if (b>max)
		max = b;
	if (c>max)
		max = c;
		
	printf("Maximum Number : %f",max);
}
