#include<iostream>
using namespace std;
class Rec
{
	public:
	float l,b;
		Rec()
		{
			l=12.43;
			b=45.04;
		}
};
int main()
{
	Rec r;
	cout<<"Area of Reactangle "<<r.l*r.b;
	return 0;
}
