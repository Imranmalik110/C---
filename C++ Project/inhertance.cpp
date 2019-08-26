#include<iostream>
using namespace std;
class Shape
{
	protected:
		float r;
	public:
		void input()
		{
			cout<<"\nEnter the value of Radis:";
			cin>>r;
		}
		float cal()
		{
			return r*r;
		}
		void display()
		{
			cout<<"\nResult is:"<<r*r;
		}
};
class Square:public Shape
{
	public:
		float cal()
		{
			return(r*r*r);
		}
		void display()
		{
			cout<<"\nResult is: "<<r*r*r;
		}
};
int main()
{
	Square s;
	s.input();
	cout<<"Sqare result:";
	s.display();
	Shape obj;
	obj.input();
	obj.cal();
	obj.display();
	cout<<"\nShape result:";
	
	return 0;
}
