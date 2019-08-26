#include<stdio.h>
int main()
{
	int a[100],b[100],size,count=0,i,j;
	printf("Enter the size of Array:");
	scanf("%d",&size);
	printf("Enter %d interges:\n",size);
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	{
	for(j=0;j<count;j++)
	{
		if(a[i]==b[j])
		break;
	}
	if(j==count)
	{
		b[count]=a[i];
		count++;
	}
	}

printf("Array obatined after removing duplicate element:\n");
for(i=0;i<count;i++)
{
	printf("%d\t",b[i]);
}
}
