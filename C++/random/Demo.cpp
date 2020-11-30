// Maximum of 3 numbers

#include<iostream>
using namespace std;

template <class T>

T Maximum(T no1, T no2, T no3)
{
    T max = 0;
    
    if((no1 >= no2) && (no1 >= no3))
    {
        max = no1;
    }
    else if((no2 >= no1) && (no2 >= no3))
    {
        max = no2;
    }
    else
    {
        max = no3;
    }
    return max;
}

int main()
{
    float value1, value2, value3;
    float iret = 0;
    
    cout<<"Enter first number\n";
    cin>>value1;
    
    cout<<"Enter second number\n";
    cin>>value2;
    
    cout<<"Enter third number\n";
    cin>>value3;
    
    iret = Maximum(value1,value2,value3);
    
    cout<<"Largest number is : "<<iret<<"\n";
    
    return 0;
}
