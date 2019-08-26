#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll,no_of_subect;
	char name_Stud[20];
	int *marks;
	public:
		student(int rno,char *name,int nos)
		{
			roll=rno;
			strcpy(name_stud,name);
			no_of_subject=nos;
			marks=new int(no_of_subject);
		}
		void accept();
		void display();
};
void student::accept()
{
	for(int i=0;i<no_of_subject;i++)
	{
		cout<<"\n\n Enter the marks of Subject "<<i+1;
		cin>>marks[i];
	}
}
void student::display()
{
	cout<<"\n---------------------------------------";
	cout<<"\n\n Student Infromation ";
	cout<<"\n----------------------------------------";
	cout<<"\n\n Roll no             :"<<roll;
	cout<<"\n\n Name                :"<<name_stud;
	for(int i=0;i<no_of_subject;i++)
	{
		cout<<"\n\n Marks of Subject :"<<i+1<<" : "<<marks[i];
	}
	cout<<"\n ----------------------------------------\n";
}
int main()
{
	int roll,no_of_subject;
	char name_stud[20];
	int cnt,i;
	for(i=0;i<cnt;i++)
	{
		cout<<"\n ---------------------------------------\n";
		cout<<"\n Enter Roll No    :";
		cin>>roll;
		cout<<"\n Enter Name       :";
		cin>>stud;
		cout<<"\n Enter the No of Subject   :";
		cin>>no_of_subject;
		cout<<"\n ----------------------------------------";
		student st(roll,stud,no_of_subject);
		st.accept();
		st.display();
	}
	return 0;
}
