import java.lang.*;
import java.util.*;

class Demo4
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String :");
		String str=obj.nextLine();

		Number4 obj1=new Number4();

		obj1.Mixpattern4(str);
	}
}

class Number4
{
	public void Mixpattern4(String str)
	{
		int i=0,j=0;
		int iret=str.length();
		char ch[]=str.toCharArray();

		for(i=0;i<iret;i++)
		{
			for(j=0;j<iret;j++)
			{
				if(j>=(iret-i))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(ch[j]+"\t");
				}
			}
			System.out.println();
		}

		for(i=1;i<iret;i++)
		{
			for(j=0;j<iret;j++)
			{
				if(i<j)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(ch[j]+"\t");
				}
			}
			System.out.println();
		}
	}
}