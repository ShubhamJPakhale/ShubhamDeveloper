#include<iostream>
using namespace std;

template <typename T>

T AddN(T *arr,int no)
{
	T result=0;

	for(int i=0;i<no;i++)
	{
		result=result+arr[i];
	}

	return result;
}

int main()
{
	int arr[]={10,20,30,40,50};

	float brr[] = {10.0,3.7,9.8,8.7};

	int iSum = AddN(arr,5);
	cout<<"Addition of all array elements are : "<<iSum;
	cout<<"\n";

	float fSum = AddN(brr,4);
	cout<<"Addition of all array elements are : "<<fSum;

	return 0;
}