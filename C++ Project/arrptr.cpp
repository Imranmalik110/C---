#include<iostream>
#include<iomanip>
using namespace std;
class Account
{
	static int count;
	public:
		void display();
};
int Account::count=50;
void Account::display()
{
	count++;
	cout<<"The value of Count="<<count<<endl;	
}
int main()
{
	Account obj1,obj2,obj3;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}

