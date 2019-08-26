#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	char fname[80];
	char rec[30];
	cout<<"Enter the file name:";
	cin>>fname;
	fout.open(fname,ios::out);
	cout<<"Enter a Word:";
	cin>>rec;
	fout<<rec;
	cout<<"\nData insert successfully";
	fout.close();
	return 0;
}
