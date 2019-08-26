#include<iostream>
#include<iomanip>
using namespace std;
class Code
{
	int a,b;
	public:
		void Display();
		Code(Code&i);
		Code()
		{
			a=0;
			b=0;
		}
};
Code::Code(Code&i)
{
	a=i.a;
	b=i.b;
}
void Code::Display()
{
	cout<<"The value of A="<<a<<endl;
	cout<<"The value of B="<<b<<endl;
}
int main()
{
	Code obj,obj1(obj);
	cout<<"Display first object"<<endl;
	obj.Display();
	cout<<"Display Second object"<<endl;
	obj1.Display();
		return 0;
}
