#include<iostream>
using namespace std;

template<class T>

int FirstOccurance(T *arr,T no,T no1)
{
	int i=0;

	for(i=0;i<no;i++)
	{
		if(arr[i]==no1)
		{
			break;
		}
	}
	
	if(arr[i]==no1)
	{
		return i+1;
	}
	else
	{
		cout<<"There is no such element in array";
	}
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};

	int no=0;
	cout<<"Enter that you want to search:";
	cin>>no;

	int iret=FirstOccurance(arr,9,no);

	cout<<"first Occurance of 10 in array are at :"<<iret;

	return 0;
}