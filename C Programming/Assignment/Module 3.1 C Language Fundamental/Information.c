#include<stdio.h>

void main()
{
	char name[10];
	char dob;
	int age;
	char add;
	
	printf("Name :");

	scanf("%s" ,&name);
	
	printf("DOB :");
	scanf("%s" ,&dob);
	printf("Enter Age :");
	scanf("%d" ,&age);
	printf("Enter Add :");
	scanf("%s" ,&add);

	printf("\nName   : %s" ,name);
	printf("\nDOB   : %s" ,dob);
	printf("\nAge    : %d" ,age);
	printf("\nAddress : %s" ,add);
}