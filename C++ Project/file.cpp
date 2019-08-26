#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char lines[40];
	ofstream file("poe..txt");
	cout<<"Writin poem:\n";
	cin.getline(lines,40);
	file<<lines;
	return 0;
}
