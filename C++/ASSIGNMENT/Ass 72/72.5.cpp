#include<iostream>
using namespace std;

template<typename T>

void Reverse(T *arr,T no)
{
	for(int i=no-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	
	cout<<"Elements in array are :\n";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<"\t";
	}

	cout<<"\nElements in Reverse order of array are :\n";
	Reverse(arr,9);

	return 0;
}