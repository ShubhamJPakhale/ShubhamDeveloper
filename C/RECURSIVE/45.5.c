#include<stdio.h>

void Display(int No)
{
	static int no=0;
	char ch=(int)'a';
	
    while((ch+no)<=(ch+No))
    {
        printf("%c\t",(ch+no));
		no++;
        Display(No);
    }
}

int main()
{
	int No=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
    Display(No);

    return 0;
}