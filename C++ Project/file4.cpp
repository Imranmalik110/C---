#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char rec[80],ch;
	ofstream fout;
	fout.open("file.txt",ios::out);
	cout<<"\nEnter the 4 lines information";
	{
		cin.get(rec,80);
		cin.get(ch);
		fout<<rec<<"\n";
	}
	fout.close();
	ifstream fin("file.txt",ios::in)
	//fin.seekg(0);
//	cout<<"\n";
	for(int i=0;i<4;i++)
	{
		fin.get(rec,80);
		fin.get(ch);
		cout<<rec<<"\n";
	}	
	fin.close();
	return 0;
}
