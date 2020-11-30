import java.lang.*;
import java.util.*;

class Demo4
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  string : ");
		String arr=obj.nextLine();
		
		Numbers4 obj1=new Numbers4();

		obj1.pattern1(arr);
	}
}

class Numbers4
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
			for(j=0;j<(iNo1-i);j++)
			{
				System.out.print(ch[j]+"\t");
			}
			System.out.println();
		}

		for(i=1;i<iNo2;i++)
		{
			for(j=0;j<=i;j++)
			{
				System.out.print(ch[j]+"\t");
			}
			System.out.println();
		}
	}
}