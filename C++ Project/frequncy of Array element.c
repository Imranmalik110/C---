#include<stdio.h>
# define max 20
void freq(int [],int);
int main()
{
	int n,i,a[max];
	printf("Enter the Size of Array:\t");
	scanf("%d",&n);
	printf("Enter %d integers:\t",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	freq(a,n);
	return 0;
}
void freq(int a[],int n)
{
	int i,j,k,c=0,num;
	for(i=0;i<n;i++)
	{
		num=a[i];
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==num)
			{
				c++;
				for(k=0;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
		printf("The Frequency element is %d and %d:\n",a[i],c);
	}
}
