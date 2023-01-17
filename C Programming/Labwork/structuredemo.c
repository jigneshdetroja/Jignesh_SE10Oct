#include<stdio.h>

struct Employee{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	struct Employee e;
	printf("\nEnter ID : ");
	scanf("%d",&e.eid);
	printf("Enter Name : ");
	scanf("%s",&e.name);
	printf("Enter Salary : ");
	scanf("%f",&e.esal);
	
	printf("\n\nID : %d",e.eid);
	printf("\nName : %s",e.name);
	printf("\nSalary :%2.f",e.esal);
}