#include<stdio.h>
#include<stdlib.h>

int Maximum(int *brr,int n)
{
	int max=brr[0];

	for(int i=0;i<n;i++)
	{
		if(brr[i]>max)
		{
			max=brr[i];
			continue;
		}
	}
	return max;
}

int LCM(int *arr,int size)
{
	int max=Maximum(arr,size);
	printf("\nMaximum number in array is %d\n",max);
	int lcm=0;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(max%arr[j]==0)
			{
				lcm=max;
				continue;
			}
			else
				j++;
		}
		++max;
	}

	return lcm;
}

int main()
{
	int no=0;

	printf("Enter number of elements in array are \n");
	scanf("%d",&no);

	int* arr;
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
	printf("lcm of array elements is %d\n",lcm);

	return 0;
}