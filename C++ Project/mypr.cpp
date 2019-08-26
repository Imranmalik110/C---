#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,f,t1,l,m,sum=0;
	cout<<"Enter the valu  of number: ";
	cin>>n;
/*	if(n==-1)
	{
		cout<<"\nPlease enter the sum Number ";
	}*/
	f=n/100;
    t1=n%100;
    l=t1%10;
    m=t1/10;
    sum=f+m+l/3;;
    cout<<"\nThe Entered number is divided by 6 perfectely ";
    cout<<"\n"<<n;
    
}
