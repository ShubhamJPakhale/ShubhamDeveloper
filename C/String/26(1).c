#include<stdio.h>

void displayASCII()
{
	char ch;
	for(int k=0;k<256;k++)
	{
		printf("%c\t",ch);
		ch++;
	}
}
int main()
{
	displayASCII();
	
	return 0;
}