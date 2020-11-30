import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String arg[])
	{
		int i=0,j=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array1:");
		int ino1=obj.nextInt();

		System.out.println("Enter Number of elements in array2:");
		int ino2=obj.nextInt();

		int arr1[]=new int [ino1];
		int arr2[]=new int [ino2];

		System.out.println("Enter elements of first array :");
		for(i=0;i<ino1;i++)
		{
			arr1[i]=obj.nextInt();
		}

		System.out.println("Enter elements of second array :");
		for(j=0;j<ino2;j++)
		{
			arr2[j]=obj.nextInt();
		}

		Number1 obj1=new Number1();

		obj1.Hello(arr1,arr2);
	}
}

class Number1
{
	public void Hello(int arr1[],int arr2[])
	{
		int i=0,j=0;
		
		System.out.println("elements of first array are :");
		for(i=0;i<arr1.length;i++)
		{
			System.out.print(arr1[i]+"\t");
		}

		System.out.println();
		System.out.println("elements of second array are :");
		for(j=0;j<arr2.length;j++)
		{
			System.out.print(arr2[j]+"\t");
		}
	}
}