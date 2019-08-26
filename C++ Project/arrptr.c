#include<stdio.h>
int main()
{
	int Arr[100],i,n,*ptr;
	printf("Enter the Size of Array:\t");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int));
	if(ptr==NULL)
	{
		printf("\nMemory not alloacted");
		exit(0);
	}
	else
	{
		printf("\nEnter %d Element in Array",n);
		for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);
		for(i=n;i>=0;i--)
		printf("%d\t",ptr[4]);
	}
	return 0;
}
