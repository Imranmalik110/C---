#include<stdio.h>
#define max 200
void maxmin(int,int);
int main()
{
	int n,i,a[max];
	printf("Enter the size of Array:\t");
	scanf("%d",&n);
	printf("Enter %d Integers in Array:\t",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	maxmin(a,n);
	return 0;
}
void maxmin(int a[max],int n)
{
	int i,b[max],t,j;
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		if(a[j]==b[1])
		{
			printf("\nThe Second Smallest Element is %d found at %d location:\t",a[j],j);
		}
		if(a[j]==b[n-2])
		{
			printf("\nThe Second Maximum Elemenet is %d found at %d location:\t",a[j],j);
		}
	}
}
