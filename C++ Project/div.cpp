#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
	int num1,num2;
	cout<<"Enter the  two number:\n";
	cin>>num1>>num2;
	
	try
	{
		if(num2!=0)
	{
		cout<<"Result(num1/num2)="<<num1/num2;
	}
	else
	{
		throw(num2);
	}
	}
	catch(int i)
	{
		cout<<"Exeption caught num2 is 0";
	}
	return (0);
}
