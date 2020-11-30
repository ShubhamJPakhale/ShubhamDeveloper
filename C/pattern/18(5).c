#include<stdio.h>

pattern(int irow,int icol)
{
	for(int i=1;i<=irow;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int ino1=0,ino2=0;
	printf("enter number of rows and coloumns :");
	scanf("%d %d",&ino1,&ino2);
	pattern(ino1,ino2);
	return 0;
}
