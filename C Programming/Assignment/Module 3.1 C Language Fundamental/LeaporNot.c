#include<stdio.h>
void main()
{
	int year;
	printf("\nPlease Enter any year you wish \n");
	scanf(" %d",&year);
	
	if(year%4 == 0)
	 {
	  if(year%100 == 0)
	   {
	 	 if (year%400 == 0)
	 		printf("\n%d is a Leap Year.", year);
	 	 else
	 	    printf("\n%d is not the Leap Year.", year);
	    }
	    else
	     printf("\n%d is a Leap Year.", year);
	 }
	else
	  printf("\n%d is not the Leap Year.", year);
	
}