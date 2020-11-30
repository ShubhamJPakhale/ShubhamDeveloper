import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int OddProduct(int arr[])
	{
		int i=0,iMult=1;
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]%2)!=0)
			{
				iMult=iMult *arr[i];
			}
		}
		return iMult;
	}
}

class A555
{
	public static void main(String[] args) 
	{
		ArrayDemo obj1=new ArrayDemo();
		int i=0;
		int iret=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array :");
		int value=obj.nextInt();

		int arr[]=new int [value];

		System.out.println("Enter elements of array :");
		for(i=0;i<value;i++)
		{
			arr[i]=obj.nextInt();
		}

		iret=obj1.OddProduct(arr);
		System.out.println("product of all odd number in array are : "+iret);
	}
}