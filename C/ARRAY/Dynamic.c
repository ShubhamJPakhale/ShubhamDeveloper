#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void OneDimensional()
{
	int size=0,i=0;
	int *arr=NULL;
	
	printf("Enter size:\n");
	scanf("%d",&size);
	
	arr=(int *) malloc (size * sizeof(int));
	
	printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("entered elements in array are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	free(arr);
}

void TwoDimensional()
{
	int row=0,column=0;
	int **arr=NULL;
	int i=0,j=0;
	
	printf("enter Number of row:");
	scanf("%d",&row);
	
	printf("enter Number of coloumn:");
	scanf("%d",&column);
	
	arr=(int **)malloc(row* sizeof(int *));

	for(i=0;i<row;i++)
	{
		arr[i]=(int *)malloc(column * sizeof(int *));
	}
	
	printf("Enter Elements are :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
}

void ThreeDimensional()
{
	int first=0,second=0,third=0;
	int i=0,j=0,k=0;
	int ***arr=NULL;
	
	printf("Enter the number of size of each arrow:");
	scanf("%d %d %d",&first,&second,&third);
	
	arr=(int ***) malloc(first *sizeof(int **));
	
	for(i=0;i<first;i++)
	{
		arr[i]=(int **)malloc(second * sizeof(int *));
		
		for(j=0;j<second;j++)
		{
			arr[j]=(int *)malloc(third * sizeof(int));
		}
	}
	
	printf("enter elements :\n");
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	printf("entered elements of array are:\n");
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for(i=0;i<first;i++)
	{
		free(arr[i]);
		
		for(j=0;j<second;j++)
		{
			free(arr[j]);
		}
	}
	free(arr);
}


void SevenDimensional()
{
	int first=0,second=0,third=0,fourth=0,fifth=0,sixth=0,seven=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0;
	int *******arr=NULL;
	
	printf("Enter the number of size of each arrow:");
	scanf("%d %d %d %d %d %d %d",&first,&second,&third,&fourth,&fifth,&sixth,&seven);
	
	arr=(int *******) malloc(first *sizeof(int ******));
	
	for(i=0;i<first;i++)
	{
		arr[i]=(int ******)malloc(second * sizeof(int *****));
		for(j=0;j<second;j++)
		{
			arr[i][j]=(int *****)malloc(third * sizeof(int ****));
			for(k=0;k<third;k++)
			{
				arr[i][j][k]=(int ****)malloc(fourth * sizeof(int ***));
				for(l=0;l<fourth;l++)
				{
					arr[i][j][k][l]=(int ***)malloc(fifth * sizeof(int **));
					for(m=0;m<fifth;m++)
					{
						arr[i][j][k][l][m]=(int **)malloc(sixth * sizeof(int *));
						for(n=0;n<sixth;n++)
						{
							arr[i][j][k][l][m][n]=(int *)malloc(seven * sizeof(int));
						}
						
					}
				}
			}
		}
	}
	
	printf("enter elements :\n");
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				for(l=0;l<fourth;l++)
				{
					for(m=0;m<fifth;m++)
					{
						for(n=0;n<sixth;n++)
						{
							for(o=0;o<seven;o++)
							{
								scanf("%d",&arr[i][j][k][l][m][n][o]);
							}
						}
					}
				}
			}
		}
	}
	
	printf("entered elements of array are:\n");
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				for(l=0;l<fourth;l++)
				{
					for(m=0;m<fifth;m++)
					{
						for(n=0;n<sixth;n++)
						{
							for(o=0;o<seven;o++)
							{
								printf("%d\t",&arr[i][j][k][l][m][n][o]);
							}
							printf("\n");
						}
						printf("\n");
					}
					printf("\n");
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for(i=0;i<first;i++)
	{
		free(arr[i]);
		for(j=0;j<second;j++)
		{
			free(arr[i][j]);
			for(k=0;k<third;k++)
			{
				free(arr[i][j][k]);
				for(l=0;l<fourth;l++)
				{
					free(arr[i][j][k][l]);
					for(m=0;m<fifth;m++)
					{
						free(arr[i][j][k][l][m]);
						for(n=0;n<sixth;n++)
						{
							free(arr[i][j][k][l][m][n]);
						}
						
					}
				}
			}
		}
	}
	free(arr);
	
}

int main()
{
	int choice=0;
	
	printf("Enter your choice number :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		   OneDimensional();
		   break;
		   
		case 2:
		   TwoDimensional();
		   break;
		   
		case 3:
		   ThreeDimensional();
		   break;
		
		case 7:
		   SevenDimensional();
		   break;
		   
		default:
		    printf("Wrong choice\n");
		    printf("Thank you for using this application!!");
			break;
	}
	return 0;
}