#include<iostream>
using namespace std;
int main()
{
	char day='F';
	switch(day)
	{
		case 'S': cout<<"Sunday"; break;
		case 'M': cout<<"Monday"; break;
		case 'T': cout<<"Tuesday"; break;
		case 'W': cout<<"Wednesday"; break;
		case 'TH': cout<<"Thursday"; break;
		case 'F': cout<<"Friday"; break;
		case 'SA': cout<<"Satuarday"; break;
		default:
			cout<<"Invalid day";
	}
	return 0;
}
