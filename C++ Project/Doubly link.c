#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*head,*last;
void create_list(int n)
{
	int i,data;
	struct node *newnode;
	if(n>=1)
	{
		head=(struct node*)malloc(sizeof(struct node));
		if(head!=NULL)
		{
			printf("Enter the Data from 1 node: ");
			scanf("%d",&data);
			head->data=data;
			head->prev=NULL;
			head->next=NULL;
			last=head;
		}
		for(i=2;i<=n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode!=NULL)
			{
				printf("Enter data of %d node: ",i);
				scanf("%d",&data);
				newnode->data=data;
				newnode->prev=last;
				newnode->next=NULL;
				last->next=newnode;
				last=newnode;
			}
			else
			{
				printf("Unable to allocated the memory");
				break;
			}
		}
		prinf("Doubly link list created successfully");
	}
	else
	{
		printf("Unable to allocte the memory");
	}
}
void Display()
{
	struct node *temp;
	int n=1;
	if(head==NULL)
	{
		printf("LIst is Empty");
	}
	else
	{
		temp=head;
		printf("\n\nData list are:\n");
		while(temp!=NULL)
		{
			printf("DATA of %D node=%d\n",n,temp->data);
			n++;
			temp=temp->data;
		}
	}
}
int  main()
{
	int ch;
	while(1)
	{
		printf("\nDoubly linklist operation");
		printf("1.Create LISt");
		printf("2.Display list");
		printf("3.Exit");
		printf("Enter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create_list(n); break;
			case 2: Display(); break;
			case 3: exit(0); break;
			default:
				printf("Plese enter the Valid choice");
		}
	}
}
