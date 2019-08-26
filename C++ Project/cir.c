#include<stdio.h>
#include<conio.h>
# define max 5
int Front=-1,Rear=-1;
int Que[max],value;
void Enque(int value);
void Deque();
void Display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.Insert Element in Queue");
		printf("\n2.Delete the Element in Queue");
		printf("\n3.Display element in Queue");
		printf("\n4.Exit");
		printf("\nEnter the choice value of to perform the Circular Queue:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be insert:\n");
				scanf("%d",&value);
				EnQue(value);
				break;
			case 2: 
				DeQue();
				break;
			case 3:
				Display();
				break;
			case 4:
				Exit(0);
				break;
			default:
				printf("\nPlease Enter the valid choice");
		}
	}
	return 0;
}
void Enque(int value)
{
	if((Rear=max-1)&& (Front=Rear+1))
	printf("\nQueue is already full terminate the progream");
	else
	{
		if((Rear=max-1)&& (Front!=0))
		Rear=-1;
		Que[++Rear]=value;
		printf("\nInsertion Succesfully");
		if(Front==-1)
		Front=0;
	}
}
void Deque()
{
	if((Front==1)&& (Rear==-1))
	{
		printf("\nQueue is Empty Deletion not possible");
	}
	else
	{
		printf("\n Deletion element is=%d",Que[Front++]);
		if(Front==max)
		Front=0;
		if(Front-1==Rear)
		Front=Rear=-1;
	}
}
void Display()
{
	if(Front==-1)
	printf("\nQueue is Empty");
	else
	{
		int i=Front;
		if(Front<=Rear)
		{
			while(i<=Rear)
			printf("\n Circular Queue elemetn is: %d\t",Que[i++]);
		}
		else
		{
			while(i<=max-1)
			printf("\n Circular Queue element is:%d\t",Que[i++]);
		i=0;
		while(i<=Rear)
		printf("\nCircular Queue element is:%d\t",Que[i++]);
		}
	}
}
