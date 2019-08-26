#include<stdio.h>
# define DEBUG 1
int main()
{
	int num;
	#if DEBUG
	printf("DEBUGING is start\n");
	#elif DEBUG<1
	printf("DEBUG is off\n");
	#endif
	printf("\nEnter the value of NUM:");
	scanf("%d",&num);
	if(num%2==0)
	printf("\nThis is even number");
	else
	printf("\nThis is odd number");
	return 0;
}
