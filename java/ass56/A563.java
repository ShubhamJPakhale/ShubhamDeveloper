import java.lang.*;
import java.util.*;

class StringHello
{
	public int CountDiffer(String str)
	{
		int icnt=0,icount=0,idiffer=0;
		for(int i=0;i<str.length();i++)
		{
			char char1=str.charAt(i);
			if((char1>='A') && (char1<='Z'))
			{
				icnt++;
	 		}
	 		else if((char1>='a')&&(char1<='z'))
	 		{
	 			icount++;
	 		}

	 		idiffer=icnt -icount;
		}
		return idiffer;
	}
}

class A563
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String from user :");
		String str=obj.nextLine();

		StringHello Hobj=new StringHello();

		int iret=Hobj.CountDiffer(str);
		System.out.println("Difference between capital and small letters in array are : "+iret);
	}
}