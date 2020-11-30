#include<stdio.h>

void SortNumber(int arr[],int i)
{
    int temp=0;
    for(int k=0;k<i-1;k++)
    {
        for(int l=0;l<i-k-1;l++)
        {
            if(arr[l] > arr[l+1])
            {
                temp=arr[l];
                arr[l]=arr[l+1];
                arr[l+1]=temp;
            }
        }
    }
}

int PrintArray(int arr[],int i)
{
    for(int j=0;j<i;j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\n");
}

int main()
{
    int iNo=0,iret=0;

    printf("Enter number :");
    scanf("%d",&iNo);

    int arr[iNo];

    printf("Elements of array are :\n");
    for(int i=0;i<iNo;i++)
    {
        scanf("%d",&arr[i]);
    }

    SortNumber(arr,iNo);

    printf("sorted Numbers of an array are :\n");
    PrintArray(arr,iNo);

    return 0;
}