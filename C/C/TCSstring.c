#include<stdio.h>
#include<string.h>

int main()
{
	char str[][]={"Asfa","Bfsdfa","Cfas","Dfsf","Efsfs"};
	char no;

	printf("Enter any elements :\n");
	scanf("%s",&no);

	for(int i=0;i<5;i++)
	{ 
		if(str[i]==no)
		{
			i=i+1;
		}
		printf("%d %s\n",i,str[i]);
	}

	return 0;
}