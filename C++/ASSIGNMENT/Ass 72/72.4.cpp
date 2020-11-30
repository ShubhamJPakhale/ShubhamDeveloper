#include<iostream>
using namespace std;

template<class T>

int LastOccurance(T *arr,T no,T no1)
{
	int i=0,size=0;

	for(i=0;i<no;i++)
	{
		if(arr[i]==no1)
		{
			size=i;
			continue;
		}
	}

	if(arr[i]==no1 || size>=0)
	{
		return size+1;
	}
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};

	int no=0;
	cout<<"Enter that you want to search:";
	cin>>no;

	int iret=LastOccurance(arr,9,no);

	cout<<"Last Occurance of 10 in array are at :"<<iret;

	return 0;
}