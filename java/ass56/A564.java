import java.lang.*;
import java.util.*;

class StringHello
{
	public boolean ChkVowel(String str)
	{
		int icnt=0;
		for(int i=0;i<str.length();i++)
		{
			char char1=str.charAt(i);
			if((char1=='a') || (char1=='e') || (char1=='i') || (char1=='o') || (char1=='u')||(char1=='A') || (char1=='E') || (char1=='I') || (char1=='O') || (char1=='U'))
			{
				icnt++;
	 		}
		}
		
		if(icnt >=1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class A564
{
	public static void main(String arg[])
	{
		boolean bret=false;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String from user :");
		String str=obj.nextLine();

		StringHello Hobj=new StringHello();

		bret=Hobj.ChkVowel(str);
		
		if(bret ==true)
		{
			System.out.println("Vowels present in string");
		}
		else
		{
			System.out.println("vowels not present in string");
		}
	}
}