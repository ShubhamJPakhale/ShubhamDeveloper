import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first string : ");
		String arr1=obj.nextLine();

		System.out.println("enter  second string : ");
		String arr2=obj.nextLine();

		System.out.println("enter  Number of second to concat second string : ");
		int no=obj.nextInt();
		
		Numbers1 obj1=new Numbers1();

		obj1.pattern1(arr1,arr2,no);
	}
}

class Numbers1
{
	void pattern1(String str1,String str2,int no)
	{
		int iNo1=str1.length();
		int iNo2=str2.length();
		
		int i=0;
		char ch1[]=str1.toCharArray();
		char ch2[]=str2.toCharArray();

		System.out.print(str1+" ");

		if(no >= iNo2)
		{
			System.out.print(str2);
		}
		else
		{
			for(i=0;i<no;i++)
			{
				System.out.print(ch2[i]);
			}
		}
	}
}