import java.lang.*;
import java.util.*;

class Demo3
{
	public static void main(String arg[])
	{
		int iret=0,j=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter character in array :");
		String str=obj.nextLine();

		int ino=str.length();
		char arr[]=new char[ino];
		arr=str.toCharArray();

		MyArray mobj=new MyArray();
		try{
			iret=mobj.CountCapital(arr);

			System.out.println("Number of capital letter in array is "+iret);
		}
		catch(Exception er){}
		}
}

class MyArray
{
	public int CountCapital(char ch[])
	{
		int i=0,icnt=0;
		int ino1=ch.length;

		for(i=0;i<ino1;i++)
		{
			if(ch[i]>='A' && ch[i]<='Z')
			{
				icnt++;
			}
		}
		return icnt;
	}
}