#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[20];
	public:
		friend void display(student);
};
void display(student s)
{
	s.rno=11;
	s.name="Imran";
}
int main()
{
	student s;
	cout<<"Result is "<<s.display();
}
