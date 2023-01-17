#include<iostream>
using namespace std;

class line{
	public:
			inline float mul(float a, float b)
			{
				return(a*b);
			}
			inline float cube(float a)
			{
				return(a*a*a);
			}
};

int main()
{
	line obj1;
	float val1,val2;
	cout<<"\nEnter 1st Value :: ";
	cin>>val1;
	cout<<"\nEnter 2nd Value :: ";
	cin>>val2;
	cout<<"\n Multiplication Value is ::"<<obj1.mul(val1,val2);
	cout<<"\n\nCube value of [ " <<obj1.cube(val1)<<" ] is :: [" <<obj1.cube(val2)<<" ]\n";
		
	return 0;
}