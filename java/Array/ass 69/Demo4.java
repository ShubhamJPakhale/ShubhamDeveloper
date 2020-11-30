import java.lang.*;
import java.util.*;

class Demo4
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

		MyArray4 mobj=new MyArray4();
		try{
			iret=mobj.Difference(arr);
			System.out.println("Difference in small and capital letter is :"+iret);
			
		}
		catch(Exception er){}
		}
}

class MyArray4
{
	public int Difference(char ch[])
	{
		int i=0,icap=0,ismall=0,iDiff=0;
		int ino1=ch.length;

		for(i=0;i<ino1;i++)
		{
			if(ch[i]>='A' && ch[i]<='Z')
			{
				icap++;
			}
			else
			{
				ismall++;
			}
		}
		iDiff=icap-ismall;
		return iDiff;
	}
}