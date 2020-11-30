#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRSIZE -2

int FrequencyEven(int * arr,int ivalue)
{
	int icount=0;
	
	if(arr==NULL)
	{
		return ERRMEMORY;
	}
	
	if(ivalue<=0)
	{
		return ERRSIZE;
	}
	
	for(int k=0;k<ivalue;k++)
	{
		if((arr[k]%2)==0)
		{
			icount++;
		}
	}
	return icount;
	
}

int main()
{
	int ino=0;
	int *ptr=NULL;
	
	printf("Enter number of values :");
	scanf("%d",&ino);                  //5
	
	ptr=(int *) malloc (ino * sizeof(int));   //it allocate 20 byte memory..
	//(int *) is typecasting which is used to break the 20 byte memory in to 4 byte chunk
	// return value of malloc is 100
	
	if(ptr ==NULL)    // malloc returns NULL if memory allocation fails
	{
		printf("Error : Unable to allocate memory\n");
		return -1;         // abort process by os
	}
	
	printf("enter values of array :\n");
	for(int i=0;i<ino;i++)
	{
		scanf("%d",&ptr[i]);
	}
	int iret= FrequencyEven(ptr,ino);  // call by address -ptr && call by value -ino
	
	if(iret==ERRSIZE)             //return due to invalid size
	{
		printf("Error : Invalid size\n");
	}
	else if(iret==ERRMEMORY)       //return due to invalid memory
	{
		printf("Error : Invalid memory address\n");     
	}
	else         //return due to success
	{	
        printf("frequency of even number is %d",iret);
	}
	
	free(ptr);       //deallocate the dynamic memory
	
	return 0;    //successful termination to os
}