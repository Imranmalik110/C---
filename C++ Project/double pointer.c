#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of A:\n");
	scanf("%d",&a);
	int *ptr;
	int **ptr1;
	ptr=&a;
	ptr1=&ptr;
	printf("The value of A is=%d",a);
	printf("\nAddress of A is=%u\t",ptr);
	printf("\nAddress of Ptr is=%u\t",ptr1);
	printf("\nValue of Ptr is=%d\t",ptr);
	return 0;
}
