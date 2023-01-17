#include <iostream>
using namespace std;

class Box{
	public:
		double add,sub,mul,div;
		Box()
		{
			cout<<"Addition of two numbers : ";
			add = 5;
			sub = 4;
			mul = 6;
			div = 2;
		}
		
		void display()
		{
			cout<<"\nVolume is "<<(add*sub*mul*div);
		}
		
};

int main()
{
	Box obj1,obj2;
	obj1.Box();
	obj1.display();
	return 0;
}