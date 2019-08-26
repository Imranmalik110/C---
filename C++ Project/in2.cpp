#include<iostream>
using namespace std;
class Shape
{
	float r;
	public: 
	void accept()
	{
		cout<<"Enter the value of R: ";
		cin>>r;
	}
	float cal_Area();
	float display();
};
float Shape::cal_Area()
{
	return (3.14*r*r);
}
float Shape::display()
{
	cout<<"The result is "<<Shape.cal_Area;
}
class Square:protected Shpae
{
	public:
		void ca_area()
		{
			return r*r;
		}
}
int main()
{
	Square s;
	s.accept();
	s.ca_area();
//	s.display();
	cout<<"\n";
	
}
