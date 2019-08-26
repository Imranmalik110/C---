#include<stdio.h>
//#include<conio.h>
int main()
{
int i,j,k=1,f,row,d=0;
//clrscr();
printf("Enter the number of row:");
scanf("%d",&row);
for(i=row;i>0;i--)
{
d=k;
for(f=row;f>i;f--)
{ printf("");
}
for(j=1;j<=i;j++)
{
printf("%d",d);
d++;
}
printf("\n");
}
return 0;
//getch();
}
