#include<stdio.h>

int main()
{
	float PAmount, ROI, Time_Period, si;
	
	printf("\nPlease enter the principal Amount : \n");
	scanf("%f",&PAmount);
	
	printf("\nPlease enter rate of Interest  :\n");
	scanf("%f",&ROI);
	
	printf("\nPlease enter the Time Period in Years : \n");
	scanf("%f",&Time_Period);
	
	si = (PAmount * ROI * Time_Period) / 100;
	printf("\nSimple Interest for Principal Amount %.2f is = %.2f", PAmount,si);
	
	return 0;
}