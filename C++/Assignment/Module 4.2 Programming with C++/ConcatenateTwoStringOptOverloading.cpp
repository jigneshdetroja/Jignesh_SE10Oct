#include<iostream>
#include<conio.h>

using namespace std;

class String{
	
	char str[20];
	public:
		void input()
		{
			cout<<"\nEnter your string : ";
			cin.getline(str,20);
		}
		void display()
		{
			cout<<"\nString : "<<str;
		}
		String operator+(String s)
		{
			String obj;
			strcat(str,s.str);
			strcpy(obj.str,str);
			return obj;
		}
};

int main()
{
	String str1,str2,str3;
	str1.input();
	str2.input();
	str3=str1+str2;
	str3.display();
	
	return 0;
}