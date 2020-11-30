import java.lang.*;
import java.util.*;

class Demo2
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter row Number :");
		int no1=obj.nextInt();

		System.out.println("Enter coloumn Number :");
		int no2=obj.nextInt();

		System.out.println("Enter Number for checking Frequency in matrices:");
		int no=obj.nextInt();

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

		Hello2 Hobj=new Hello2();

		Hobj.Frequency(arr,no);
	}
}

class Hello2
{
	void Frequency(int arr[][],int no)
	{
		int temp=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(arr[i][j]==no)
				{
					temp++;
				}
			}
		}
		System.out.println("Frequency of given number in matrices is "+temp);
	}
}