import java.lang.*;
import java.util.*;

class Demo3
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String :");
		String str=obj.nextLine();

		Number3 obj1=new Number3();

		obj1.Mixpattern3(str);
	}
}

class Number3
{
	public void Mixpattern3(String str)
	{
		int i=0,j=0;
		int iret=str.length();
		char ch[]=str.toCharArray();

		for(i=0;i<iret;i++)
		{
			for(j=0;j<iret;j++)
			{
				if(j>i)
				{
					System.out.print("#\t");
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