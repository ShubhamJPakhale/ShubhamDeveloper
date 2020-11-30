import java.lang.*;
import java.util.*;

class StringHello
{
	public void ReverseWord(String str)
	{
		int i=0,j=0;
		int k=str.length();
		char temp='\0';
		for(i=(k-1);i>=0;i--)
		{
			System.out.print(str.charAt(i));
	    }
	}
}

class A565
{
	public static void main(String arg[]) 
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter String from user :");
		String str=obj.nextLine();

		StringHello Hobj=new StringHello();

		try{
		System.out.println("Reverse string is :");
		Hobj.ReverseWord(str);
	}
	catch(Exception obj5)
	{

	}
	}
}