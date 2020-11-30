import java.lang.*;
import java.util.*;

class StringHello
{
	public int NoofCapital(String str)
	{
		int icnt=0;
		for(int i=0;i<str.length();i++)
		{
			char char1=str.charAt(i);
			if((char1>='A') && (char1<='Z'))
			{
				icnt++;
			}
		}
		return icnt;
	}
}

class A561
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String from user :");
		String str=obj.nextLine();

		StringHello Hobj=new StringHello();
		int iret=Hobj.NoofCapital(str);
		System.out.println("Number of capital letters in string are :"+iret);
	}
}