#include<stdio.h>
#include<stdlib.h>
void IBegining(int);
void Display();
int value,head;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int ch;
	while(1)
	{
		printf("\n Operation on Liked List");
		printf("\n1.Insert at Begining");
		printf("\n2.Display element");
		printf("\n3.Exit");
		printf("\nEnter the choice value:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the value which you want to insert the linked list:");
				scanf("%d",&value);
				IBegining(value);
				break;
			case 2:
				Display();
				break;
			case 3:
				exit(0); break;
			default:
				printf("\nYou have enterd wrong choice value");
		}
	}
	return 0;
}
void IBegining(int value)
{
	struct node *one;
	one=(struct node*)malloc(sizeof(struct node));
	one->data=value;
	one->next=NULL;
	if(head==NULL)
	{
		head=NULL;
		head=one;
	}
	else
	{
		one->next=head;
		head=one;
	}
	printf("\nNode insertion succuessfully");
}
void Display()
{
	if(head==NULL)
	{
		printf("\nList is empty terminate the program");
	}
	else
	{
		struct node *temp=head;
		printf("\nList element are:\t");
		while(temp->next !=NULL)
		{
			printf("%d--->",temp->data);
			temp=temp->next;
		}
		printf("%d--->NULL",temp->data);
	}
}
