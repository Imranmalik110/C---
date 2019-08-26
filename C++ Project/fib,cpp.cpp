#include<iostream>
using namespace std;
int main()
{
	int f=0,l=1,next,i,n;
	cout<<"Enter the value of N:";
	cin>>n;
	cout<<f<<endl;
	cout<<l<<endl;
	for(i=2;i<=n;++i)
	{
		next=f+l;
		cout<<next<<endl;
		f=l;
		l=next;
	}
	return 0;
}
