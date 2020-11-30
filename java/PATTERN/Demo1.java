import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  Row Number");
		int value1=obj.nextInt();

		System.out.println("enter  Coloumn Number");
		int value2=obj.nextInt();

		Numbers obj1=new Numbers();

		obj1.pattern1(value1,value2);
	}
}

class Numbers
{
	void pattern1(int iNo1,int iNo2)
	{
		int i=0,j=0,icnt=1;
		char ch='A';

		System.out.println();

		for(i=1;i<=iNo1;i++)
		{
			for(j=1;j<=iNo2;j++)
			{
				if(i == j)
				{
					System.out.print("&\t");
				}
				else if((i==1) || (j==1) || (i==iNo1) || (j==iNo2))
				{
					System.out.print("*\t");
				}
				else if(i>j)
				{
					System.out.print(ch+"\t");
					ch++;
				}
				else
				{
					System.out.print(icnt+"\t");
					icnt++;
				}
			}
			System.out.println();
		}
	}
}