#include<stdio.h>

void main()
{
	float length, width, area;
	
	printf("Enter length of rectangle\n");
	scanf("%2f",&length);
	
	printf("Enter width of rectangle\n");
	scanf("%2f",&width);
	
	area = length*width;
	
	printf("Area of Rectangle is %2f\n",area);
	
	getch();
}