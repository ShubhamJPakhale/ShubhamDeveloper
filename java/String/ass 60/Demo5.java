import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		boolean bret=false;
		String brr;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter string :");
		String str=obj.nextLine();

		Numbers5 Nobj=new Numbers5();

		try
		{
			bret=Nobj.Strpalindrome(str);
		}
		catch(Exception Eobj)
		{}

		if(bret==true)
		{
			System.out.println("String is palindrome");
		}
		else
		{
			System.out.println("String is not palindrome");
		}
	}
}

class Numbers5
{

	public boolean Strpalindrome(String arr)
	{
		int i=0,icnt=0;
		int iret=arr.length();
		char ch[]=arr.toCharArray();

		for(i=0;i<iret;i++)
		{
			if(ch[i] !=ch[iret-i-1])
			{
				icnt++;
				break;
			}
		}

		if(icnt ==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}