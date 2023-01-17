#include<stdio.h>

union Employee{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	union Employee e;
	printf("\nEnter ID : ");
	scanf("%d",&e.eid);
	printf("\nID : %d",e.eid);
	printf("\n\nEnter Name : ");
	scanf("%s",&e.name);
	printf("\n\nName : %s",e.name);
	printf("\n\nEnter Salary : ");
	scanf("%f",&e.esal);
	printf("\n\nSalary :%2.f",e.esal);
	
	printf("\n\nUnion Size is : %d Bytes",sizeof(e));
}