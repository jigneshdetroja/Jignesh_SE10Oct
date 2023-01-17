#include <iostream>
using namespace std;
/*
Constructor : it is a special method.
			- It has same name as Class Name.
		    - It has no return type.
			- It is use to initialize the values.
   Imp Note - It is called automatically when the object is created.
   
   Types of Constructor.
   1) Default Constructor (with no parameters)
   2) Parameterized Constructor. (with parameters)
*/

class Box{
	public:
		double width,height,depth;
		Box()
		{
			cout<<"Default Constructor Called.";
			width = 5;
			height = 4;
			depth = 6;
		}
		
		Box(double w,double h,double d)
		{
			cout<<"\n\nParameterized Constructor Called.";
			width = w;
			height = h;
			depth = d;
		}
		
		void display()
		{
			cout<<"\nVolume is "<<(width*height*depth);
		}
};

int main()
{
	Box obj1,obj2;
	obj1.display();
	Box obj3(5,2,6);
	obj3.display();
	return 0;
}