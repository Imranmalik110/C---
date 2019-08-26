#include<iostream>
using namespace std;
class Area
{
	public:
		int r;
		Area(int s)
		{
			s=r;
		}
};
int main()
{
	Area a;
	cout<<"Square of Area "<<a.r*a.r;
	return 0;
}
