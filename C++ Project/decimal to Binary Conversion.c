#include<stdio.h>
int  main()
{
	long dec_val,binary_val=0,num,rem,base=1;
	printf("Enter A Decimal Value:\t");
	scanf("%ld",&num);
	dec_val=num;
	while(num>0)
	{
		rem=num%2;
		binary_val=binary_val+rem*base;
		num=num/2;
		base=base*10;
	}
	printf("The Binary Equalvalent is %ld\t",binary_val);
	return 0;
}
