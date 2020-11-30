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

		Hello Hobj=new Hello();

		Hobj.matricsSum(arr);
	}
}

class Hello
{
	void matricsSum(int arr[][])
	{
		int sum=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				sum=sum+arr[i][j];
			}
			System.out.println("Sum of matrices row no "+i+"is "+sum);
			sum=0;
		}
	}
}