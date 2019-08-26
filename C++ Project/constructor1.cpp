#include<iostream>
using namespace std;
class Student
{
	public:
		int rno;
		string name;
		float marks;
		Student()
		{
			rno=101;
			name="IMRAN";
			marks=12.48;
		}
};
int main()
{
	Student s;
	cout<<"Roll number "<<s.rno;
	cout<<"\nNAME is "<<s.name;
	cout<<"\nMarks of Student "<<s.marks;
	return 0;
}
