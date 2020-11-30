#include<iostream>
using namespace std;

template<typename T>

T Largest(T no1,T no2,T no3)
{
	T result;

	if(no1>=no2 && no1>=no3)
	{
		result=no1;
	}
	else if(no2>=no1 && no2>=no3)
	{
		result=no2;
	}
	else
	{
		result=no3;
	}
	return result;
}

int main()
{
	int a=0,b=0,c=0;
	cout<<"Enter three  integer number for finding largest in between them :\n";
	cin>>a>>b>>c;

	int iresult=Largest(a,b,c);
	cout<<"Largest Number is "<<iresult;

	return 0;
}