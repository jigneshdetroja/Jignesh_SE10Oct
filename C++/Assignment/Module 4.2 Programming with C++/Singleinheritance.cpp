#include<iostream>
using namespace std;

class cricketer{
	public:
		
		int tt = 200;
		int avg=tt/11;
		int be = 50;
};

class batsman: public cricketer{
	
	public:
		void display()
{
		cout<<"\nTotal Runs : "<<tt;
		cout<<"\nAverage Runs : "<<avg;
		cout<<"\nBest Performance : "<<be;			
}
};
int main()
{
	batsman obj;
	obj.display();
	return 0;
}