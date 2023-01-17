#include<iostream>
using namespace std;

class ScopeDemo{
	public:
		void func();
		void func2()
		{
			cout<<"This is func2";
		}
};

void ScopeDemo::func()
{
	cout<<"This is Function from ScopeDemo Class.";
	ScopeDemo::func2();
}
int main()
{
	ScopeDemo sd;
	sd.func();
	return 0;
}