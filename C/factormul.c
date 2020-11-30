#include<stdio.h>                     //header file

int MultFactor(int ivalue1)      //function defination
{
    int iAns=0;               //input argument 
    int imul=1;

    if(ivalue1==0)
    {
        return 0;
    }

    if(ivalue1<0)
    {
        ivalue1= -ivalue1;
    }

    for(iAns=1;iAns<=ivalue1/2;iAns++)    //for loop for value increment.....time complexity for iteration which reduces time for run process....
    {
        if(ivalue1 % iAns ==0)        //logic for checking factor of given number as follows...
        {
            //printf("%d",iAns);        //prints factor of given number which is divisible by numer and gives remainder 0....

            imul=iAns*imul;          //prints sum of factor of number
        }
    }
    return imul;
}
int main()
{
    int ino1=0;
    int iret=0;

    printf("Enter number : \n");          //input number 
    scanf("%d",&ino1);

    iret=MultFactor(ino1);  //function caller.....

    printf("%d\t",iret);

    return 0;           // succcessful compilation of process.....
}