import java.lang.*;
import java.util.*;

public class hello
{
	public static void main(String arg[])
	{
		System.out.println("First java program");
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of values :");
		int ivalue=sobj.nextInt();
		
		int arr[]=new int[ivalue];
		
		System.out.println("Enter values of array :");
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
		
		demo obj=new demo();
		obj.MinimumNo(arr);
	}
}

class demo
{
	public void MinimumNo(int arr[])
	{
		int iMax=arr[0];
		
		for(int j=0;j<arr.length;j++)
		{
			if(arr[j]<iMax)
			{
				iMax=arr[j];
			}
		}
		System.out.println("Minimum no in array is "+iMax);
	}
}