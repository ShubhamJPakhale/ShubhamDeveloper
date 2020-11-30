import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public boolean Check(int arr[],int no)
	{
		int i=0,icnt=0;
		for(i=0;i<arr.length;i++)
		{
			if(arr[i] ==no)
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

class A551
{
	public static void main(String[] args) 
	{
		ArrayDemo obj1=new ArrayDemo();
		int i=0,no=0;
		boolean bret=false;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array :");
		int value=obj.nextInt();

		System.out.println("Enter Number that want to search in array :");
		no=obj.nextInt();

		int arr[]=new int [value];

		System.out.println("Enter elements of array :");
		for(i=0;i<value;i++)
		{
			arr[i]=obj.nextInt();
		}

		bret=obj1.Check(arr,no);
		if(bret == true)
		{
			System.out.println("Number present in array");
		}
		else
		{
			System.out.println("Number not found in array");
		}
	}
}