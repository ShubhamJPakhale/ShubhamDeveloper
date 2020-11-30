import java.lang.*;
import java.util.*;

class Demo4
{
	public static void main(String arg[])
	{
		String brr;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter string :");
		String str=obj.nextLine();

		Numbers4 Nobj=new Numbers4();

		try
		{
			Nobj.StrRevTogX(str);
		}
		catch(Exception Eobj)
		{}

	}
}

class Numbers4
{
	public void StrRevTogX(String arr)
	{
		int i=0;
		int iret=arr.length();
		char ch[]=arr.toCharArray();

		while(ch[i]!='\0' && i<iret)
		{
			for(i=(iret-1);i>=0;i--)
			{
				if(ch[i]>='a' && ch[i]<='z')
				{
					ch[i]=(char)(ch[i] -32);
				}
				else if(ch[i]>='A' && ch[i]<='Z')
				{
					ch[i]=(char)(ch[i] +32);
				}
				System.out.print(ch[i]);
			}
		}
		/*
		for(i=(iret-1);i>=0;i--)
		{
			if(ch[i]>='a' && ch[i]<='z')
			{
				ch[i]=(char)(ch[i] -32);
			}
			else if(ch[i]>='A' && ch[i]<='Z')
			{
				ch[i]=(char)(ch[i] +32);
			}
			System.out.print(ch[i]);
		}
		*/
	}
}