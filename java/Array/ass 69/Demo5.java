import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		int iret=0,i=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter elements in array :");
		int ino=obj.nextInt();

		int arr[]=new int [ino];
		System.out.println("Enter elements of array are :");
		for(i=0;i<ino;i++)
		{
			arr[i]=obj.nextInt();
		}

		MyArray5 mobj=new MyArray5();
		
		System.out.println("Star pattern according to input parameter are :");
		mobj.PatternX(arr);
	}
}

class MyArray5
{
	public void PatternX(int arr[])
	{
		int i=0,j=0;
		int ino1=arr.length;

		for(i=0;i<ino1;i++)
		{
			for(j=0;j<arr[i];j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
}