#include<stdio.h>

int FrequencyDiffer(int arr[],int ivalue)
{
	int icount=0,icnt=0,iDiff=0;
	for(int k=0;k<ivalue;k++)
	{
		if((arr[k]%2)==0)
		{
			icount++;
		}
                else
                {
                       icnt++;
                }
          iDiff=icount-icnt;
	}
	return iDiff;
	
}

int main()
{
	int ino=0;
	int *ptr=NULL;
	
	printf("Enter number of values");
	scanf("%d",&ino);
	
	ptr=(int *)malloc(ino * sizeof(int));
	
	printf("enter number of array :");
	for(int i=0;i<ino;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Entered number of array are:");
	for(int i=0;i<ino;i++)
	{
		printf("%d",ptr[i]);
	}
	
	int iret=FrequencyDiffer(ino);
	
	printf("frequency of difference of odd and even number count is %d",iret);
	
	return 0;
}