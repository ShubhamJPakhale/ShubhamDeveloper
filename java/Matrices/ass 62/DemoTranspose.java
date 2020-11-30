import java.lang.*;
import java.util.*;

class DemoTranspose
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

		Hello1 Hobj=new Hello1();

		System.out.println("Transpose of matrices number are : ");
		try
		{
			Hobj.Transpose(arr);
		}
		catch(Exception obj1){}
	}
}

class Hello1
{
	public void Transpose(int arr[][])
	{
		int temp=0;
		int i=arr.length();
		int j=arr[0].length();
		int brr[][]=new int [i][j];

		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[0].length;j++)
			{
		 	   brr[i][j]=arr[j][i];
			}
		}

		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[0].length;j++)
			{
				System.out.print(brr[i][j]+"\t");
			}
			System.out.println();
		}
	}
}