#include<iostream>
using namespace std;

template <class T>

class Swap
{
	public : 

	void SwapR(T no1,T no2)
	{
		T temp=no1;
		no1=no2;
		no2=temp;

		cout<<"Number after swap are :\n";
		cout<<no1<<"\t"<<no2;
	} 
};

int main()
{
	int choice=0;

	cout<<"please select type of datatype for input :\n";
	cout<<"1.int \n2.float\n";
	cin>>choice;

	switch(choice)
	{
		case 1:
		{
			 int a=0,b=0;
			 cout<<"Enter two elements of array :\n";
			 cin>>a;
			 cin>>b;
			 Swap<int> obj;
			 obj.SwapR(a,b);
			 break;
		}

		case 2:{
		 float a1=0.0f,b1=0.0f;
		 cout<<"Enter two elements of array :\n";
		 cin>>a1;
		 cin>>b1;
		 Swap<float> obj1;
		 obj1.SwapR(a1,b1);
		 break;
		}

		default :
		 cout<<"invalid choice !!\n";
	}

	return 0;
}