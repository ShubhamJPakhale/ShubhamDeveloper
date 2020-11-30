#include<stdio.h>
#include<string.h>

int main()
{
	char str[30]="shubham";
	char *ch;
	//char ch1;
	//printf("hello world. this is good - programmin practice\n",str);    
	printf("hello world.\"%S\" this is good - programmin practice\n",str);  // IT WRITTENS SHUBHAM IN BETWEEB string
	ch=strtok(str,",.-");
	
	//strtok= insert into str("pakhale");
	//printf("%s",ch1);
	
	while(ch !=NULL)
	{
		printf("%s\n",ch);
		ch=strtok(NULL,",.-");
	}
	/*
	if(ch !=str)
	{
		printf("%s\n",ch);
		ch=strtok(NULL,"");
	}
	*/
	return 0;
}
	