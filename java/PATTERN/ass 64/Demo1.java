import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String :");
		String str=obj.nextLine();

		Number obj1=new Number();

		obj1.Mixpattern(str);
	}
}

class Number
{
	public void Mixpattern(String str)
	{
		int i=0,j=0;
		int iret=str.length();
		char ch[]=str.toCharArray();

		for(i=0;i<iret;i++)
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