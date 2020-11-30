#include<stdio.h>
#include<stdlib.h>

int MultipleOf3&5(int arr[],int ivalue)
{
	int icount=0;
	int inod=0;
	
	for(int k=0;k<ivalue;k++)
	{
		if(((arr[k]%5)==0) && ((arr[k]%3)==0))
		{
			printf("%d\t",arr[k]);
		}
	}
}

int main()
{
	int ino=0;
	int *ptr=NULL;
	
	printf("Enter number of values :");
	scanf("%d",&ino);
	
	ptr=(int *) malloc (ino * sizeof(int));
	
	if(ptr ==NULL)
	{
		printf("Error : Unable to allocate memory\n");
		return -1;
	}
	
	printf("enter values of array :\n");
	for(int i=0;i<ino;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Multiple of 5 and 3 numbers in array is \n");
	
	MultipleOf3&5(ptr,ino);
	
	free(ptr);
	
	return 0;
}