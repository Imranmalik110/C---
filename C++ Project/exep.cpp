#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of X and Y:\n";
	cin>>x>>y;
	int a=x-y;
	try
	{
		if(a!=0)
		{
			cout<<"Result(x/a)="<<x/a;
		}
		else
		{
			throw(a);
		}
	}
	catch(int i)
	{
		cout<<"Execption caught a="<<a;
	}
	return (0);
}

