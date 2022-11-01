#include<stdio.h>

void main()

{
	char name[10];
	int age;
	float salary;
	
	
	printf("Name  :");
	//scanf("%s" ,&name);
	gets(name);
	printf("Age   :");
	scanf("%d" ,&age);
	printf("Salary:");
	scanf("%f" ,&salary);
	
	printf("\nName   : %s" ,name);
	printf("\nAge    : %d" ,age);
	printf("\nSalary : %.2f" ,salary);
}