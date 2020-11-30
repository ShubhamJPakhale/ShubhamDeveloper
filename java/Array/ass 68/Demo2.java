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

		int arr1[]=new int [ino1];
		
		System.out.println("Enter elements of first array :");
		for(i=0;i<ino1;i++)
		{
			arr1[i]=obj.nextInt();
		}

		Number2 obj1=new Number2();

		System.out.println("sum of Digit of each elements in array as follows : ");
		obj1.SumofDigit(arr1);

	}
}

class Number2
{
	public void SumofDigit(int arr1[])
	{
		int i=0,j=0,icnt=0,isum=0;
		int iret=arr1.length;
		
		for(i=0;i<iret;i++)
		{
			int no=arr1[i];
			while(no!=0)
			{
				isum=isum+no%10;
				no=no/10;
			}
			arr1[i]=isum;
			isum=0;
		}

		for(i=0;i<iret;i++)
		{
			System.out.print(arr1[i]+"\t");
		}
	}
}