import java.lang.*;
import java.util.*;

class DemoEx
{
	public static void main(String arg[])
	{
		boolean bret=false;
		System.out.println("Exception Handling program");

		Scanner obj=new Scanner(System.in);
		System.out.println("enter number of array elements :");
		int no=obj.nextInt();

		System.out.println("enter number that we want to find in array :");
		int no1=obj.nextInt();

		int arr[]=new int [no];

		System.out.println("Enter elements of array :");
		for(int i=0;i<no;i++)
		{
			arr[i]=obj.nextInt();
		}

		try
		{
			Hello Hobj=new Hello();
			System.out.println("Inside try block of java program");

			bret=Hobj.findNumber(arr,no1);
			System.out.println();
			
			if(bret==true)
			{
				System.out.println("Number is present in array");
			}
			else
			{
				System.out.println("Number not present in array");
			}
		}
		catch(Exception ref)
		{

		}
		finally
		{
			System.out.println("Inside finally block of program");
		}
	}
}

class Hello
{
	public boolean findNumber(int arr[],int no1)
	{
		int icnt=0;
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
			if(arr[i]==no1)
			{
				icnt++;
			}

		}

		if(icnt>=1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}