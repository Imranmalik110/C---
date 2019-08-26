#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
class Area
{
	float ar;
	public: 
		Area(float r)
		{
			ar=r*r;
		}
		Area(float l,float b)
		{
			ar=l*b;
		}
		Area(float a,float b,float c)
		{
			float s;
			s=(a+b+c)/2;
			ar=s*(s-a)*(s-b)*(s-c);
			ar=pow(ar,0.5);
		}
		void Display()
		{
			cout<<"The value of Area:\n"<<ar;
		}
};
int main()
{
	int ch;
	float x,y,z;
	while(1)
	{
		cout<<"\n 1.Area of Square";
		cout<<"\n 2.Area of Ractangle";
		cout<<"\n 3.Area of Trangle";
		cout<<"\n 4.Exit";
		cout<<"\nEnter the value of Choice ";
		cin>>ch;
		switch(ch)
		{
			case 1: 
			{
			cout<<"\n Enter the value of x ";
			cin>>x;
			Area A(x);
			A.Display();
			}	
			break;
			case 2: 
			{
			cout<<"\n Enter the value of X and Y:\n";
			cin>>x>>y;
			Area B(x,y);
			B.Display();
			}	
			break;
			case 3: 
			{
			cout<<"\n Enter the value of X and Y OR Z:\n";
			cin>>x>>y>>z;
			Area C(x,y,z);
			C.Display();
			}
			break;
			case 4: exit(0); break;
			default: 
			cout<<"\nPlease Enter the valid Choice";
		}
	}
	return 0;
}
