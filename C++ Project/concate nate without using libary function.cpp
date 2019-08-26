#include<iostream>
#include<string.h>
void concat(char [],char []);
using namespace std;
int main()
{
	char s1[100],s2[100];
	cout<<"Enter the Two String:\t"<<endl;
	cin>>s1>>s2;
	concat(s1,s2);
	cout<<"Concatenate string is:"<<s1<<endl;
	return 0;
}
void concat(char s1[],char s2[])
{
	int i,j;
	i=strlen(s1);
	for(j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	} s1[i]='\0';
}
