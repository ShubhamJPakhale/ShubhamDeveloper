#include<iostream>
using namespace std;

template<class T>

void Display(T value,int no)
{
	for(T i=0;i<no;i++)
	{
		cout<<value<<"\t";
	}
	cout<<"\n";
}

int main()
{
	Display('M',11);
	Display('3',5);
	Display('L',8);

	return 0;
}