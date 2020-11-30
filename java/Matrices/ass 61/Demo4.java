import java.lang.*;
import java.util.*;

class Demo4
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

		Hello4 Hobj=new Hello4();

		try
		{
			Hobj.SuminColoumn(arr);
		}
		catch(Exception obj1){}
	}
}

class Hello4
{
	void SuminColoumn(int arr[][])
	{
		int sum=0,i=0,j=0;
		for(i=0;i<arr[0].length;i++)
		{
			for(j=0;j<arr.length;j++)
			{
				sum=sum+arr[j][i];
			}
			System.out.println("sum of Number in matrices coloumn no "+j +" is "+sum);
			sum=0;
		}
	}
}