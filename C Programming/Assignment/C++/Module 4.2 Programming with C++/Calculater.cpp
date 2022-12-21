#include<iostream>
using namespace std;

int main()
{
	char ok;
	double a,b;
	
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nEnter your choice? \n1.Addition, \n2.Substraction, \n3.Multiplication, \n4.Division : \n\n";
	cin>>ok;
	
	switch (ok)
	{
		case '1':
		cout<<a<<"+"<<b<<"="<<(a+b);
		case '2':
		cout<<a<<"-"<<b<<"="<<(a-b);
		case '3':
		cout<<a<<"x"<<b<<"="<<(a*b);
		case '4':
		cout<<a<<"/"<<b<<"="<<(a/b);
		break;
	}
	
	return 0;
}