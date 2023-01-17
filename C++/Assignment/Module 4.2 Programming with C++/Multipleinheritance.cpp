#include<iostream>
using namespace std;

class students{
	public:
	int rollno;
	void info()
	{
		cout<<"Roll Number : ";
		cin>>rollno;
	}
};

class TestScore{
	public:
	int s1;
	int s2;
	void marks()
	{
		s1=75;
		s2=85;
	}
};

class Result : public students, public TestScore{
	public:
		int s1,s2,Total;
		Result()
		{
			s1=75;
			s2=85;
			Total=s1+s2;
			
		}
		
		void data()
		{
			cout<<"\n Roll Number : "<<rollno;
			cout<<"\n Math : "<<s1;
			cout<<"\n English : "<<s2;
			cout<<"\n Total : "<<Total;
		}
};

int main()
{
	Result obj;
	obj.info();
	obj.data();
	return 0;
}