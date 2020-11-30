import java.lang.*;
import java.util.*;

class Demo2
{
	public static void main(String[] args) throws Exception
	{
		boolean bret=false;
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first string : ");
		String arr1=obj.nextLine();

		System.out.println("enter  second string : ");
		String arr2=obj.nextLine();

		Numbers2 obj1=new Numbers2();

		/*
		int iNo1=arr1.length();
		int iNo2=arr2.length();
		
		
		if(iNo1 == iNo2)
		{
			try
			{
				bret=obj1.pattern1(arr1,arr2);
			}
			catch(Exception ref)
			{}
		}
		else
		{
			bret=false;
		}
		*/

		try
		{
			bret=obj1.pattern1(arr1,arr2);
		}
		catch(Exception ref)
		{}
		
		if(bret == true)
		{
			System.out.println("Both string are same(TRUE)");
		}
		else
		{
			System.out.println("Both string are not same(FALSE)");
		}
	}
}

class Numbers2
{
	boolean pattern1(String str1,String str2)
	{
		int i=0,icnt=0;
		char ch1[]=str1.toCharArray();
		char ch2[]=str2.toCharArray();

		while(ch1[i]!='\0' && ch2[i]!='\0')
		{
			if(ch1[i] != ch2[i])
			{
				icnt++;
				break;
			}
			i++;
		}

		if(icnt ==0 && ch1[i]!='\0' && ch2[i]!='\0')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}