#include<stdio.h>
int main()
{
	int a,d,o,i;
	a=d=o=i=0;
	char str[1000];
	printf("Enter a String: ");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
		{
			a++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			o++;
		}
		i++;
	}
	printf("Alphates=%d\n",a);
	printf("Digits=%d\n",d);
	printf("Special Character=%d\n",o);
	return 0;
}
