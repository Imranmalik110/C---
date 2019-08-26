#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[80];
	int len;
	cin.getline(name,80);
	len=strlen(name);
	fstream file;
	file.open("poem.txt"),ios::in ! iso::out);
	for(int i=0;i<len;i++)
		file.put(name[i]);
	file.seekg(0);
	char ch;
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}
	return 0;
	
}
