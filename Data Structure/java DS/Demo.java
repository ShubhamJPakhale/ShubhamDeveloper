import java.lang.*;
import java.util.*;

class Array
{
	public int arr[];

	public Array(int size)
	{
		arr=new int[size];
	}

	public void accept()
	{
		Scanner obj2=new Scanner(System.in);
		System.out.println("Enter elements Number :");

		for(int i=0;i<arr.length;i++)
		{
			arr[i]=obj2.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Entered elements Number of array are:");

		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
	}

	public void Count()
	{
		int a=arr.length;
		System.out.println("Total number of elements in array are "+a);
	}
}

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Hello public");
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number :");
		int a=obj.nextInt();

		Array obj1=new Array(a);

		obj1.accept();
		
		obj1.Display();

		System.out.println();
		obj1.Count();
	}
}