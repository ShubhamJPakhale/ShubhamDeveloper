#include<stdio.h>

int EvenFact(int ivalue)
{
    int ino=0,imult1=1,imult2=1,idiff=0;

    if(ivalue<0)
    {
        ivalue=-ivalue;
    }

   for(ino=1;ino<=ivalue;ino++)    //for evnfactorial of numbers
    {
        if((ino %2)==0)
        {
            imult1=imult1 * ino;
        }
    }
    

    for(ino=1;ino<=ivalue;ino++)        //for odd factorial of numbers
    {
        if((ino %2)!=0)
        {
            imult2=imult2 * ino;
        }
    }

    idiff=imult1 - imult2;

    return idiff;
}

int main()
{
    int i=0,iret=0;

    printf("Enter number :\n");
    scanf("%d",&i);

    iret=EvenFact(i);

    printf("Multiplication of even factor is %d",iret);

    return 0;
}