#include<iostream>
using namespace std;
# define max 20
void armstrong(int [],int);
int main()
{
	int a[max],n,i;
	cout<<"Enter the size of Array:"<<endl;
	cin>>n;
	cout<<"Enter %d integers:"<<n<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	armstrong(a,n);
	return 0;
}
void armstrong(int a[max],int n)
{
	int i=0,c=0,temp,rem,sum=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		temp=a[i];
		while(a[i]!=0)
		{
			rem=a[i]%10;
			sum=sum+rem*rem*rem;
			a[i]=a[i]/10;
		}
		if(temp==sum)
		{
			c++;
		}
	}
	cout<<"\n Total armstong no is:"<<c<<endl;
}
