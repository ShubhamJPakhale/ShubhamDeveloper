#include<iostream>
using namespace std;

class Array
{
public:
	int *arr;
	int no;

	Array(int length)
	{
		no=length;
		cout<<"Inside constructor of Array class \n";
		arr=new int[length];  //memory allocation in c++
	}

	~Array()
	{
		cout<<"\nInside Destructor of Array class";
		delete []arr;
	}

	void Accept()
	{
		cout<<"Enter elements of array :\n";
		for(int i=0;i<no;i++)
		{
			cin>>arr[i];
		}
	}

	void Display()
	{
		cout<<"Entered elements of array are :\n";
		for(int i=0;i<no;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}	
};

int main()
{
	int a=0;

	cout<<"Number of elements in array are :\n";
	cin>>a;

	Array obj(a);  //static object creation 

	//Array *obj1=new Array(a);
	//obj1->Accept();
    //obj1->Display();
    //delete obj1;                //  Dynmic memory deallocation
   

	//int *arr=new int[a];     //array in c++

	obj.Accept();
	obj.Display();

	return 0;
}