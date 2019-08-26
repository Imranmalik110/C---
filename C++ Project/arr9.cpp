#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,o=0,e=0;
	cout<<"Enter the 10 numbers of Element:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		e=e+arr[i];
		else
		o=o+arr[i];
	}
	cout<<"Sum of Even number is:"<<e<<endl;
	cout<<"SUm of Odd number is:"<<o<<endl;
	return 0;
}
