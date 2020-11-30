import java.lang.*;
import java.util.*;

class Demo2
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String :");
		String str=obj.nextLine();

		Number2 obj1=new Number2();

		obj1.Mixpattern2(str);
	}
}

class Number2
{
	public void Mixpattern2(String str)
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
	}
}