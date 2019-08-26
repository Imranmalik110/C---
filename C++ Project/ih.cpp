#include<iostream>
using namespace std;
class Student
{
	protected:
		int subject[3],i;
	public:
		void Accept()
		{
			cout<<"Enter the Detail of Three subject---"<<endl;
			cout<<"Hindi:";
			cin>>subject[0];
			cout<<"Math:";
			cin>>subject[1];
			cout<<"Urdu:";
			cin>>subject[2];
		}
};
class B:public Student
{
   protected:
   	int total;
	public:
		void cal()
		{
			total=subject[0]+subject[1]+subject[2];
		}
};
class C:public B
{
	int per;
	public:
		void percantage()
		{
			per=total/3;
		}
		void show()
		{
			cout<<"The Percentage is:"<<per<<endl;
		}
};
int main()
{
	C obj;
	obj.Accept();
	obj.cal();
	obj.percantage();
	obj.show();
	return 0;
}
