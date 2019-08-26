#include<stdio.h>
# define PI 3.14
# define cal(r) (PI*r*r)
int main()
{
	float r;
	printf("Enter the Radious Value:");
	scanf("%f",&r);
	float area=cal(r);
	printf("\nARea is=%f",area);
	return 0;
}
