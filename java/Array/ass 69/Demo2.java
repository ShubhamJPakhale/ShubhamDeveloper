import java.lang.*;
import java.util.*;

class Demo2
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

		MyArray2 mobj=new MyArray2();
		try{
			iret=mobj.CountVowels(arr);
			System.out.println("Number of vowels in array is :"+iret);
		}
		catch(Exception er){}
		}
}

class MyArray2
{
	public int CountVowels(char ch[])
	{
		int i=0,icnt=0;
		int ino1=ch.length;

		for(i=0;i<ino1;i++)
		{
			if(ch[i]=='a' || ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u' ||ch[i]=='A' || ch[i]=='E'|| ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U')
			{
				icnt++;
			}
		}
		return icnt;
	}
}