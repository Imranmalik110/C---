#include<stdio.h>
int main()
{
	long int binary_val,hexa_val=0,base=1,rem;
	printf("Enter the Binary value in 0 and 1 's From':\t");
	scanf("%ld",&binary_val);
	while(binary_val!=0)
	{
		rem=binary_val%10;
		hexa_val=hexa_val+rem*base;
		base=base*2;
		binary_val=binary_val/10;
	}
	printf("Its Hexa decimal Equalvelent is:%d\t",hexa_val);
	return 0;
}
