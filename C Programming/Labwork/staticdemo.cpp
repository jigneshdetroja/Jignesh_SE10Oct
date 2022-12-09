#include<iostream>
using namespace std;

class staticDemo{
	public:
		static int objCount;
		
		staticDemo()
		{
			cout<<"This is Default Constructor";
			objCount++;
		}
};

int staticDemo::objCount=0;

int main()
{
	staticDemo obj1,obj2,obj3;
	cout<<"\nObject Count:"<<obj1.objCount;
	return 0;
}