#include<stdio.h>

int SumSecondNumber(int *a,int b)
{
	int large=arr[0],small=arr[0];

	for(int i=0;i<b;i++)
	{
		if(arr[i]>large)
		{
			ret=arr[i];
		}
	}
}

int main()
{
	int a=0,n=0;
	printf("Enter number of elements :\n");
	scanf("%d",n);
	int arr[n];

	printf("Enter elements of array are :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}

	int ret=SumSecondNumber(arr,n);
	printf("Sum of second smallest and second largest number in array is %d\n",ret);

	return 0;
}