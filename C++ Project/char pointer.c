#include<stdio.h>
int main()
{
	char *name[5]=
	{
		"Alam","Imarn","Aness","Samim","Rahim"
};
	int i;
	for(i=0;i<5;i++)
	{
		printf("Value of Name[%d]=%s\n",i,name[i]);
	}
	return 0;
}
