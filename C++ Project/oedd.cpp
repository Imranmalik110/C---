#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"Enter the 5 Element:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"odd number:"<<endl;
	for(i=0;i<5;i++)
	if(arr[i]%2!=0)
	{
		cout<<arr[i]<<endl;;
	}
	return 0;
}
