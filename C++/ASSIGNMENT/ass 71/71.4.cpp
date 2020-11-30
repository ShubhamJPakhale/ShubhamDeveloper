#include<iostream>
using namespace std;

template<typename T>

T Max(T *arr,int no)
{
	T result=arr[0];
	for(int i=0;i<no;i++)
	{
		if(arr[i]>result)
		{
			result=arr[i];
		}
	}
	return result;
}

int main()
{
	int arr[]={10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};

	int iresult=Max(arr,5);
	cout<<"Maximum Number in array is "<<iresult;

	float fresult=Max(brr,4);
	cout<<"\nMaximum Number in array is "<<fresult;

	return 0;
}