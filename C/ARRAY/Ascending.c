#include<stdio.h>

void Ascending(int arr[],int no)
{
	int temp=0;

	for(int i=0;i<no;i++)
	{
		for(int j=0;j<no-i-1;j++)
		{
			if(arr[j]>arr[j+1])     //if(arr[j]<arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("Final Ascending order array is : ");
	for(int i=0;i<no;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int main()
{
	int no=0;
	printf("Enter Number of elements in array :\n");
	scanf("%d",&no);

	int arr[no];

	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}

	Ascending(arr,no);

	return 0;
}