#include <iostream>
using namespace std;

class Box{
	public:
		Box()
		{
  			cout<<"Default Constructor Called.";
			width = 5;
			height = 4;
			depth = 6;
		}
		
		Box(double w,double h,double d)
		{
			cout<<"\nParamerterized Constructor Called.";
			width = w;
			height = h;
			depth = d;
		}
		
		Box(const Box &h)
		{
			cout<<"\nCopy Constructor Called.";
			width = h.width;
			height = h.height;
			depth = d.depth;
		}
		
		void display()
		{
			cout<<"\nVolume is "<<(width*height*depth);
		}
};

int main()
{
	Box obj1;
	obj1.display();
	
	Box obj3(5,2,6);
	obj3.display();
	
	Box obj4(obj1);
	obj4.display();
	return 0;
}