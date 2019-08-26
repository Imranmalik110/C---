#include<iostream>
using namespace std;
int main()
{
	int i,j,cnt=0;
	for(i=2;i<20;i++)
	{
		cnt=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			cnt++;
			break;
		}
		if(cnt==0)
		{
			cout<<"Prime number is "<<i;
		}
	}
}
	return 0;
}
