#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,mul[3][3];
	prinft("Enter the data in 1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf(" ");
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter the data in Second matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf(" ");
		scanf("%d",&b[i][j]);
	}
	printf("\nMultiplication  of two matrix:\n");
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
