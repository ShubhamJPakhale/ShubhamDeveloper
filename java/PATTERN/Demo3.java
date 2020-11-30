import java.lang.*;
import java.util.*;

class Demo3
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  Row Number");
		int value1=obj.nextInt();

		System.out.println("enter  Coloumn Number");
		int value2=obj.nextInt();

		Numbers3 obj1=new Numbers3();

		obj1.pattern1(value1,value2);
	}
}

class Numbers3
{
	void pattern1(int iNo1,int iNo2)
	{
		int i=0,j=0;
		char ch1='A',ch2='a';

		System.out.println();

		for(i=1;i<=iNo1;i++)
		{
			for(j=1;j<=iNo2;j++)
			{
				if(i%2 !=0)
				{
					System.out.print(ch1+"\t");
				    ch1++;
				}
				else
				{
					System.out.print(ch2+"\t");
				    ch2++;
				}
			}
			System.out.println();
			ch1='A';
			ch2='a';
		}
	}
}