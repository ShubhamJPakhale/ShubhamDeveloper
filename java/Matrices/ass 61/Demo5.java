import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter row Number :");
		int no1=obj.nextInt();

		System.out.println("Enter coloumn Number :");
		int no2=obj.nextInt();

		int arr[][]=new int [no1][no2];

		System.out.println("enter elements of matrices :");
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("Row number is "+i);
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j]=obj.nextInt();
			}
			
		}

		System.out.println("entered elements of matrices are :");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}

		Hello5 Hobj=new Hello5();

		System.out.println("Number in row after swap are : ");
		try
		{
			Hobj.SwapRows(arr);
		}
		catch(Exception obj1){}
	}
}

class Hello5
{
	void SwapRows(int arr[][])
	{
		int i=0,j=0, temp=0;

		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[0].length;j++)
			{
		 	    temp=arr[i][j];
				arr[i][j]=arr[i+1][j];
				arr[i+1][j]=temp;
			}
		}

		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[0].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
}