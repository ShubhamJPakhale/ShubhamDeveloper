import java.lang.*;
import java.util.*;

class StringHello
{
	public int NoofSmall(String str)
	{
		int icnt=0;
		for(int i=0;i<str.length();i++)
		{
			char char1=str.charAt(i);
			if((char1>='a') && (char1<='z'))
			{
				icnt++;
	 		}
		}
		return icnt;
	}
}

class A562
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String from user :");
		String str=obj.nextLine();

		StringHello Hobj=new StringHello();

		int iret=Hobj.NoofSmall(str);
		System.out.println("Number of small letters in array are : "+iret);
	}
}