#include<iostream>
using namespace std;

class Side{
	protected:
		int l;
		public:
			void getVal(int x)
			{
				l = x;
			}
};
class Square : public Side{
	public:
		int sq()
		{
			return l*l;
		}
};
class Cube : public Side{
	public:
		int cu()
		{
			return l*l*l;
		}
};

int main()
{
	Square s;
	s.getVal(5);
	cout<<"\nSquare is :"<<s.sq();
	
	Cube c;
	c.getVal(3);
	cout<<"\nCube is :"<<c.cu();
	
	return 0;
}