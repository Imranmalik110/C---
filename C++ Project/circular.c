#include<stdio.h>
#include<conio.h>

void insertAtBeginning(int);
void insertAtEnd(int);
/*	void insertAtAfter(int,int);
	void deleteBeginning();
	void deleteEnd();
	void deleteSpecific(int);			*/
void display();

struct Node
{
   int data;
   struct Node *next;
}*head = NULL;

void main()
{
   int choice1,value;
    //choice2, value, location;
   clrscr();
   while(1)
   {
      printf("\n*********** MENU *************\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
      scanf("%d",&choice1);
      switch(choice1)
      {
         case 1: printf("Enter the value to be inserted: ");
         		 scanf("%d",&value);
                 while(1)
                 {
                 	printf("\nSelect from the following Inserting options\n");
                 	printf("1. At Beginning\n2. At End\n3. After a Node\n4. Cancel\nEnter your choice: ");
                    scanf("%d",&choice2);
                    switch(choice2)
                    {
                       case 1: 	insertAtBeginning(value);
                       		break;
                       case 2: 	insertAtEnd(value);
                       		break;
                /*   	   case 3: 	printf("Enter the location after which you want to insert: ");
                       		scanf("%d",&location);
                       		insertAfter(value,location);
                       		break;
                       case 4: 	goto EndSwitch;			*/
                       default: printf("\nPlease select correct Inserting option!!!\n");
                    }
                 }
       /*  case 2: while(1)
                 {
                 	printf("\nSelect from the following Deleting options\n");
                 	printf("1. At Beginning\n2. At End\n3. Specific Node\n4. Cancel\nEnter your choice: ");
                    scanf("%d",&choice2);
                    switch(choice2)
                    {
                       case 1: 	deleteBeginning();
                       		break;
                       case 2: 	deleteEnd();
                       		break;
                       case 3: 	printf("Enter the Node value to be deleted: ");
                       		scanf("%d",&location);
                       		deleteSpecic(location);
                       		break;
                       case 4:	goto EndSwitch;
                       default: printf("\nPlease select correct Deleting option!!!\n");
                    }
                 }
                 EndSwitch: break;					
         case 3: display();
         	 break;
         case 4: exit(0);
         default: printf("\nPlease select correct option!!!");
      }				*/
   }
}
void insertAtBegining(int value)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=value;
	if(head==NULL)
	{
		head=new;
		new->next=head;
	}
	else
	{
		struct node *tmp=head;
		while(tmp->next !=head)
	tmp=tmp->next;
	temp->next=head;
	head=new;
	tmp->next=head;
	}
	printf("\nNode inserted Successfully");
}
void insertAtEnd(int value)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=value;
	if(head==NULL)
	{
		head=new;
		new->next=head;
	}
	else
	{
		struct node *tmp=head;
		while(tmp->next !=head)
		tmp=tmp->next;
		tmp-next=new;
		new->next=head;
	}
	printf("\nNode inserted Succesfully");
}
void display()
{
	if(head==NULL)
	printf("\nList is empty");
	else
	{
		struct node *tmp=head;
		printf("\nLIst  Are:\t");
		while(temp->next !=head)
		{
			printf("%d-->",tmp->data);
		}
		printf("%d---> %d-->",tmp->data,head->data);
	}
}
