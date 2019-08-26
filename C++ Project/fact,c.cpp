#include<stdio.h>
int main()
{
	int p=4;
	int *a;
	a=&p;
	printf("%d %u %u %d",p,&p,a,*a);
	return 0;
}
