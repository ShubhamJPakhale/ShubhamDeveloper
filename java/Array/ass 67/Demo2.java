import java.lang.*;
import java.util.*;

class Demo2
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

		Number2 obj1=new Number2();

		System.out.println("Minimum Number in each array is :");
		obj1.minofarray(arr1,arr2);
	}
}

class Number2
{
	public void minofarray(int arr1[],int arr2[])
	{
		int i=0,j=0,min=0;
		
		for(i=0;i<arr1.length;i++)
		{
			if(min>arr1[i])
			{
				min=arr1[i];
			}
		}
		System.out.print(min+"\t");

		min=arr2[0];
		for(j=0;j<arr2.length;j++)
		{
			if(min>arr2[j])
			{
				min=arr2[j];
			}
		}
		System.out.print(min+"\t");

	}
}