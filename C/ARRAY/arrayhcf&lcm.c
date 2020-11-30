#include<stdlib.h>

int Maximum(int *brr,int n)
{
	int max=arr[0];

	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			continue;
		}
	}
	return max;
}

int LCM(int *arr,int size)
{
	int max=Maximum(arr,size);
	printf("Maximum number in array is %d\n",max);

	for(int i=0;i<size;i++)
	{
		if(max%arr[i]==0)
		{
			int lcm=max;
			break;
		}
		++max;
	}

	return lcm;
}

int main()
{
	int no=0;

	printf("Enter number of elements in array are %d\n");
	scanf("%d",&no);

	int arr[]=NULL;
	arr=(int*)malloc(sizeof(int)*no);

	printf("Enter elements of array are :\n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Elements of array are :\n");
	for(int i=0;i<no;i++)
	{
		printf("%d\t",arr[i]);
	}

	int lcm=LCM(arr,no);
	printf("lcm of array elements is \n");

	return 0;
}