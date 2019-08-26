#include<stdio.h>
//#define max 3
//#ifndef max 1
#define max 8
//#endif
int main()
{
	//printf("The maximum value of Preprocessor became=%d\n",max);
	#if max <=3
	printf("This is first execution of the program\n");
	#elif max>3
	printf("This is the Second execution of the Program\n");
	#endif
	return 0;
}
