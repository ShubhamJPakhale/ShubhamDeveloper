import java.lang.*;
import java.util.*;

class Demo3
{
	public static void main(String[] args) throws Exception
	{
		boolean bret=false;
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first string : ");
		String arr1=obj.nextLine();

		System.out.println("enter  second string : ");
		String arr2=obj.nextLine();


		System.out.println("enter  Number for compare parameters of string : ");
		int no=obj.nextInt();

		Numbers3 obj1=new Numbers3();

		try
		{
			bret=obj1.Strcmp(arr1,arr2,no);
		}
		catch(Exception ref)
		{}
		
		if(bret == true)
		{
			System.out.println("Both string contain same words in it (TRUE)");
		}
		else
		{
			System.out.println("Both string are not contain same word in it(FALSE)");
		}
	}
}

class Numbers3
{
	boolean Strcmp(String str1,String str2,Integer no)
	{ 
		int i=0,icnt=0;
		char ch1[]=str1.toCharArray();
		char ch2[]=str2.toCharArray();

		while(ch1[i]!='\0' && ch2[i]!='\0' && i<no)
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