void DeleteAtpos(PPNODE Head,PPNODE Tail,int pos)
{
	PNODE temp=*Head;
	PNODE temp2=temp->next;
	
	int size=0;
	size=count(*Head,*Tail);
	
	if(pos<1 || pos>size+1)
	{
		return;
	}
	
	if(pos ==1)
	{
		Deletefirst(Head,Tail);
	}
	else if(pos ==size)
	{
		DeleteLast(Head,Last);
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp2->next;
		free(temp2);
	}
}