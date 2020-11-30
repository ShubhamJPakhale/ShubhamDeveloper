#include<iostream>
using namespace std;

template<class T>

T frequency(T *arr,T no,T no1)
{
	int icnt=0;
	for(int i=0;i<no;i++)
	{
		if(arr[i]==no1)
		{
			icnt++;
		}
	}
	return icnt;
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iret=frequency(arr,9,10);

	cout<<"Number of 10 in array are :"<<iret;

	return 0;
}