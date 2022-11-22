#include<stdio.h>

void func1()
{
	printf("\nThis is Funtion1");
}
void func2()
{
	printf("\nThis is Funtion2");
}
void func3()
{
	func2();
	printf("\nThis is Funtion3");
}
void main()

{
	func1();
	func2();
	func3();
}