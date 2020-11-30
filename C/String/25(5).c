#include<stdio.h>

void DisplaySchedule(char j)
{
	switch (j)
	{
		case ('a'):    // use different case in one by one  if our code output is insensitive
		case ('A'):
		printf("7 AM");
		break;
		
		case ('b'):
		case ('B'):
		printf("8.30 AM");
		break;
		
		case ('c' ):
		case ('C' ):
		printf("9.20 AM");
		break;
		
		case ('D') :
		case ('d') :
		printf("10.30 AM");
		break;
		
		default :
		printf("Invalid Division");
	};
}
int main()
{
	char j='\0';
	
	printf("Enter character :\n");
	scanf("%c",&j);
	
	DisplaySchedule(j);
	
	return 0;
}