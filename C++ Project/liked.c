void deleteEnd ()
{
	if(head==NULL)
	{
		cout<<"List is empty terminate the program";
	}
	else
	{
		struct node *temp1=head,*temp2;
		if(head->next==NULL)
		head=NULL;
		else
		{
			if(temp-next !=NULL)
			{
				temp2=temp1;
				temp1=temp1->next;
			}
			temp2->next=NULL;
		}
		free(temp1);
		cout<<"Date node successfully";
	}
}
void deleteFront()
{
	if(head==NULL)
	{
		cout<<"List is empty deletion is not possible";
	}
	else
	{
		struct node *tmp=head;
		if(head->next==NULL)
		{
			head=NULL;
			free(tmp);
		}
		else
		{
			head=tmp->next;
			free(temp1);
			cout<<"deletion operation Succesfully"
		}
	}
}
