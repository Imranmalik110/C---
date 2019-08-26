#include<iostream>
using namespace std;
class FACT
{
	int n,i,fact;
	public:
		FACT(int x)
		{
			n=x;
			fact=1;
		}
		FACT(FACT &x)
		{
			n=x.n;
			fact=1;
		}
		void cal()
		{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
		}
		void display()
		{
			cout<<"\nFactorial is "<<fact;
		}
};
int main()
{
	int x;
	cout<<"Enter the value of To calculate the Factorial: ";
	cin>>x;
	FACT f1(x);
	f1.cal();
	f1.display();
	FACT f2(f1);
	f2.cal();
	f2.display();
	return 0;
}
