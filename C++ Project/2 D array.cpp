#include<iostream>
using namespace std;
int main()
{
	int i,row,cols,j,arr[10][10];
	cout<<"Enter the number of Rows and Cols:\n";
	cin>>row>>cols;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		cin>>arr[i][j];
	}
	cout<<"Array is :\n";
	for(i=0;i<row;i++)
	{
		cout<<" ";
		for(j=0;j<cols;j++)
		{
			cout<<"\tarr["<<i<<"]["<<j<<"]:";
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
}
