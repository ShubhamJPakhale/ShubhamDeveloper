#include<stdio.h>

int main()
{
	int option=0;
	printf("Display company\n1.Samsung 10000\n2.Onida 7000\n3.HDCL 6000\n");
	scanf("%d",&option);

	switch(option)
	{
		case 1:
		{
			int p=10000;
			int no=0,no1=0,result=0,result1=0;

			printf("Do you want to Exchange tv\n1.Yes\n2.No\n");
			scanf("%d",&no);

			switch(no)
			{
				case 1:
				printf("Status of exchanges tv\n1.Working\n2.Not Working\n");
				scanf("%d",&no1);

				switch(no1)
				{
					case 1:
					result=p-(p*0.2);
					printf("Amount after discount is :%d\n",result);
					break;

					case 2:
					result1=p-(p*0.02);
					printf("Amount after discount is :%d\n",result1);
					break;
				}
				break;

				case 2:
				printf("Amount without Discount is :%d",p);
				break;
			}
			break;
		}
		

		case 2:
		{
			int p=7000;
			int no=0,no1=0,result=0,result1=0;

			printf("Do you want to Exchange tv\n1.Yes\n2.No\n");
			scanf("%d",&no);

			switch(no)
			{
				case 1:
				printf("Status of exchanges tv\n1.Working\n2.Not Working\n");
				scanf("%d",&no1);

				switch(no1)
				{
					case 1:
					result=p-(p*0.2);
					printf("Amount after discount is :%d\n",result);
					break;

					case 2:
					result1=p-(p*0.02);
					printf("Amount after discount is :%d\n",result1);
					break;
				}
				break;

				case 2:
				printf("Amount without Discount is :%d",p);
				break;
			}
			break;	
		}
		

		case 3:
		{
			int p=6000;
			int no=0,no1=0,result=0,result1=0;
			printf("Do you want to Exchange tv\n1.Yes\n2.No\n");
			scanf("%d",&no);

			switch(no)
			{
				case 1:
				
				printf("Status of exchanges tv\n1.Working\n2.Not Working\n");
				scanf("%d",&no1);

				switch(no1)
				{
					case 1:
					result=p-(p*0.2);
					printf("Amount after discount is :%d\n",result);
					break;

					case 2:
					result1=p-(p*0.02);
					printf("Amount after discount is :%d\n",result1);
					break;
				}
				break;

				case 2:
				printf("Amount without Discount is :%d",p);
				break;
			}
			break;
		}
		
		default:
		printf("INVALID OPTION");
	}
	return 0;
}