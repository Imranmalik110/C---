#include<iostream>
using namespace std;
class Birth
{
	int day,month,year;
	public:
		Birth(int a,int b,int c)
		{
			day=a;
			month=b;
			year=c;
		}
		void display()
		{
			cout<<"days is "<<day<<"-"<<"Month is "<<month<<"-"<<"year is "<<year;
		}
		void getdata();
};
/*void Birth::getdata()
{
	cout<<"Enter the days number:"<<endl;
	cin>>day;
	cout<<"Enter the Month number:"<<endl;
	cin>>month;
	cout<<"Enter the Year number:"<<endl;
	cin>>year;
}			*/
int main()
{
	Birth obj(01,07,1997);
///	obj.getdata();
	obj.display();
	return 0;
}
