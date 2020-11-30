import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  string : ");
		String arr=obj.nextLine();
		
		Numbers1 obj1=new Numbers1();

		obj1.pattern1(arr);
	}
}

class Numbers1
{
	void pattern1(String str)
	{
		int iNo1=str.length();
		int iNo2=str.length();

		int i=0,j=0;
		char ch[]=str.toCharArray();

		System.out.println();

		for(i=0;i<iNo1;i++)
		{
			for(j=0;j<iNo2;j++)
			{
				
				System.out.print(ch[i]+"\t");
			}
			System.out.println();
		}
	}
}