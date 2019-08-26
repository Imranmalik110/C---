#include<stdio>
#include<stdlib>
using namespace std;
int main()
{
	char ch,file1,file2[20];
	FILE fp1*,fp2*;
	printf("Enter the name of to be copy");
	gets(file1);
	fp1=fopen(file1,"r");
	if(fp1==NULL)
	{
		printf("press any key to exit:\n");
		exit(EXIT_FALUIRE);
	}
	printf("Enter the name of target file");
	gets(file2);
	fp2=fopen(file2,"w");
	if(fp2==NULL)
	{
		fclose(file1);
		printf("Press any key to exit:\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(file1)) !=EOF)
	fputc(ch,file2);
	printf("\nFile copied successfully");
	fclose(file1);
	fclose(file2);
	return 0;
	
}
