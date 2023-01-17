#include<iostream>
using namespace std;
class Calc{
	public:
	int a,b;
	Calc()
	{
		cout<<"\nEnter A : ";
		cin>>a;
		cout<<"\nEnter B : ";
		cin>>b;
		
		cout<<"\nAddition : "<<a+b;
		cout<<"\nSubstraction : "<<a-b;
		cout<<"\nMultiplication : "<<a*b;
		cout<<"\nDivition : "<<float(a/b);
	}
};
int main()
{
	Calc obj;
	return 0;
}