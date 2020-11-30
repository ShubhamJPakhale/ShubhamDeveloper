package package1;

import java.lang.*;
import java.util.*;

public class MarvellousArray
{
	public int arr[];

	public MarvellousArray(int size)
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