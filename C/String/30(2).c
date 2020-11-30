#include<stdio.h>

void strcpyXX(char *str1,char *str2,int icnt)
{
	int i=0,j=0;
	
	if(str1==NULL)
	{
		return -1;
	}
	
	while((*str1 !='\0')&&(icnt !=0))
	{
		str2[j]=str1[i];
		j++;
		i++;
		icnt--;
	}
	
	return str2;
}

int main()
{
	char arr[30]= "Marvellous Multi OS";
	char brr[30];
	
	strcpyXX(arr,brr,10);
	
	printf("%s",brr);
	
	return 0;
}