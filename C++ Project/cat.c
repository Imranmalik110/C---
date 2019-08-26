#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],mul[3][3],i,j,k;
	printf("Enter the Element in First matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf(" ");
		scanf("%d",&a[i][j]);
	}
	printf("Display First Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	
	}
	printf("Enter the Element in Second matirx:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nDisplay Second Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",b[i][j]);
	}
	printf("The Multplication of two matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
