import java.lang.*;
import java.util.*;
import java.io.*;

class checkarmore
{
	public String Findarmore(String a1,String a2) 
	{
		int length1=a1.length;
		int length2=a2.length;

		for(int i=0;i<length1;i++)
		{
			for(int j=0;j<length2;j++)
			{
				if(a1[i]!=a2[j])
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			
		}
	}
}

class armore
{
	public static void main(String args[])
	{
		boolean bret=false;

		Scanner obj=new Scanner(System.in);

		System.out.println("Enter first name :");
		String arr1=obj.nextLine();

		System.out.println("Enter second name :");
		String arr2=obj.nextLine();

		checkarmore obj=new checkarmore();

		bret=obj.Findarmore(arr1,arr2);

		if(bret==true)
		{
			System.out.println("String is armore");
		}
		else
		{
			System.out.println("String is not armore");
		}
	}
}