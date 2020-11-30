import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int Difference(int arr[])
	{
		int i=0,ieven=0,iodd=0,iDiffer=0;
		for(i=0;i<arr.length;i++)
		{
			if((arr[i] %2) ==0)
			{
				ieven=ieven + arr[i];
			}
			else
			{
				iodd=iodd + arr[i];
			}
		}
		iDiffer=ieven-iodd;
		return iDiffer;
	}
}

class A531
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

		iret=obj1.Difference(arr);
		System.out.println("Difference of enen and odd elements of array are :"+iret);
		
	}
}