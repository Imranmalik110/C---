#include<stdio.h>
using namespace std;
int main()
{
	int i,j,k=0,row=7;
	printf("Enter the pattern below:\n");
	for(i=0;i<row-1;i++,k=0)
	{
		for(j=1;j<=row-1;++j);
		{
			printf(" ");
		}
		while(k!=2*i-1)
		{
			printf("*");
			++k;
		}
		printf("\n");
	}
}
