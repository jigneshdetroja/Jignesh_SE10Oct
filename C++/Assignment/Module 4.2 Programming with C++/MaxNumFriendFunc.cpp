#include<iostream>
using namespace std;

class Test{
	private:
		int j,k;
		public:
		void input(){
			cout<<"Enter two numbers: ";
			cin>>j>>k;
		}
		friend void find(Test t);
};
void find(Test t){
	if(t.j>t.k){
		cout<<"Largest is: " <<t.j;
	}
	else {
		cout<<"Largest is: " <<t.k;
	}
	
}
int main()
{
	Test t;
	t.input();
	find(t);
	return 0;
}