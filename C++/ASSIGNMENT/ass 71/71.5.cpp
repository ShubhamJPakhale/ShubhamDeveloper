#include<iostream>
using namespace std;

template<typename T>

T MIn(T *arr,int no)
{
	T result=arr[0];
	for(int i=0;i<no;i++)
	{
		if(arr[i]<result)
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

	int iresult=MIn(arr,5);
	cout<<"Minimum Number in array is "<<iresult;

	float fresult=MIn(brr,4);
	cout<<"\nMinimum Number in array is "<<fresult;

	return 0;
}