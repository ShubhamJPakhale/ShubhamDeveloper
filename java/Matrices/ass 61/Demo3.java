import java.lang.*;
import java.util.*;

class Demo3
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

		Hello3 Hobj=new Hello3();

		Hobj.LargestNo(arr);
	}
}

class Hello3
{
	void LargestNo(int arr[][])
	{
		int temp=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(arr[i][j]>temp)
				{
					temp=arr[i][j];
				}
			}
		}
		System.out.println("LargestNo in matrices is "+temp);
	}
}