import java.lang.*;
import java.util.*;

class Demo1
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

		MyArray1 mobj=new MyArray1();
		try{
			System.out.println("capital to small letter in array is :");
			mobj.Replace(arr);
		}
		catch(Exception er){}
		}
}

class MyArray1
{
	public void Replace(char ch[])
	{
		int i=0,icnt=0;
		int ino1=ch.length;

		for(i=0;i<ino1;i++)
		{
			if(ch[i]>='A' && ch[i]<='Z')
			{
				ch[i]=(char)(ch[i]+32);
			}
			System.out.print((ch[i])+"\t");
		}
	}
}