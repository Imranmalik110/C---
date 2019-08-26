#include<stdio.h>
//uisng namespace std;
int main()
{
	long num,binary_val,dec_val=0,rem,base=1;
	printf("Enter A Binary Value as 0 and 1 from:\t");
	scanf("%ld",&num);
	binary_val=num;
	while(num>0)
	{
		rem=num%10;
		dec_val=dec_val+rem*base;
		base=base*2;
		num=num/10;
	}
	printf("ITs Decimal Equalvalent is %d\t",dec_val);
	return 0;
}
