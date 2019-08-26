#include<iostream>
using namespace std;
class Sum
{
	private:
		int a=10,b=30,c;
	public: 
	void display()
	{
		//c=a+b;
		cout<<"The sum is "<<c;
	}
	int add();
};
Class Sum::add()
{
	c=a+b;
}
int main()
{
	Sum x;
	x.add();
	return 0;
}
