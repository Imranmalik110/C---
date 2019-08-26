#include<iostream>
using namespace std;
int main()
{
	int size,i,arr[30];
	cout<<"Enter the size of array:";
	cin>>size;
	cout<<"Enter the element in array:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"Enterd element array is:\n";
	for(i=0;i<size;i++)
	cout<<arr[i]<<"\t";
	return 0;
}
