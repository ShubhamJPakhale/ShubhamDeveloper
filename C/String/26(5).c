#include<stdio.h>

void Display(char ch1)
{
	printf("Decimal :%d\n",ch1);
	
	//printf("Binary :%ld\n",ch1);
	/*while(ch1 !='\0')
	{
		rem=ch1%2;
		digit=rem*(2^n);
		printf("binary :%b\n",digit);
	}
    */	
	printf("Hexadecimal :OX%x\n",ch1);
	printf("Octal :0%o",ch1);

}

int main()
{
	char ch='\0';
	
	printf("enter character:\n");
	scanf("%c",&ch);
	
	Display(ch);
	
	return 0;
}