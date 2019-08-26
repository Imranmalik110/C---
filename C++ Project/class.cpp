#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[30];
public:
	void input()
	{
		cout<<"Enter the Rno:";
		cin>>rno;
		cout<<"Enter the name:";
		cin>>name;
	}
	void show()
	{
		cout<<"\nRoll number is: "<<rno;
		cout<<"\nName :"<<name;
	}
};
int main()
{
	student s;
	s.input();
	s.output();
	return 0;
}
