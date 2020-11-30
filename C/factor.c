#include<stdio.h>                     //header file

int DisplayFactor(int ivalue1)      //function defination
{
    int iAns=0;               //input argument 
    int isum=1;

    if(ivalue1==0)
    {
        return 0;
    }

    if(ivalue1<0)
    {
        ivalue1= -ivalue1;
    }

    for(iAns=2;iAns<=ivalue1/2;iAns++)    //for loop for value increment.....time complexity for iteration which reduces time for run process....
    {
        if(ivalue1 % iAns ==0)        //logic for checking factor of given number as follows...
        {
            //printf("%d",iAns);        //prints factor of given number which is divisible by numer and gives remainder 0....

            isum=iAns+isum;          //prints sum of factor of number
        }
    }
    return isum;
}
int main()
{
    int ino1=0;
    int iret=0;

    printf("Enter number : \n");          //input number 
    scanf("%d",&ino1);

    iret=DisplayFactor(ino1);  //function caller.....

    printf("sum of Factor of given number is: %d\n",iret);

    return 0;           // succcessful compilation of process.....
}