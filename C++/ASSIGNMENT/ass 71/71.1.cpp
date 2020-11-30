#include<iostream>
using namespace std;

template<typename T>

T Multiply(T no1,T no2)
{
	T result;
	result=no1*no2;
	return result;
}

int main()
{
	int a=0,b=0;
	cout<<"Enter two  integer number for multiplication :\n";
	cin>>a>>b;

	float a1=0,b1=0;
	cout<<"Enter two float number for multiplication :\n";
	cin>>a1>>b1;

	int iret=Multiply(a,b);
	cout<<"multiplication of two number is :"<<iret;

	float fret=Multiply(a1,b1);
	cout<<"\nmultiplication of two number is :"<<fret;

	return 0;
}