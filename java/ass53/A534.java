import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public void Multiple(int arr[])
	{
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			if(((arr[i] %5) ==0) && ((arr[i]%3)==0))
			{
				System.out.println(arr[i]);
			}
			
		}
	}
}

class A534
{
	public static void main(String[] args) 
	{
		ArrayDemo obj1=new ArrayDemo();
		int i=0,iret=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array :");
		int value=obj.nextInt();

		int arr[]=new int [value];

		System.out.println("Enter elements of array :");
		for(i=0;i<value;i++)
		{
			arr[i]=obj.nextInt();
		}

		System.out.println("Multiple of 5 & 3 elements in array are :");
		obj1.Multiple(arr);
	}
}