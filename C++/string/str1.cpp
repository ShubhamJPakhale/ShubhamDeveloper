using namespace std;
#include<iostream>
int main()
{
	
	char str[30];
	
	cout<<"Enter string : "<<endl;
	cin.get(str,30);
	cout<<"entered string is : \n"<<str;
	
	cin.ignore();   // it breaks two statement of string input 
	
	char str1[30];
	
	cout<<"\nEnter string : "<<endl;
	cin.get(str1,30);
	cout<<"entered string is : \n"<<str1;
	
	/*
	string str1;
	cout<<"\nEnter string : "<<endl;
	getline(cin,str1);
	
	cout<<"entered string is : "<<str1<<endl;
	*/
	return 0;
}