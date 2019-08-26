#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter theh value of X and Y and Y:\n";
	cin>>a>>b;
	c=add(a,b);
	cout<<"The Sum of Two Number is:"<<c;
	return 0;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
