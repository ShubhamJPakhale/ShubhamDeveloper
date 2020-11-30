import java.lang.*;
import java.util.*;

class Demo1
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

		Number1 obj1=new Number1();

		System.out.println("reverse each elements in array as follows : ");
		obj1.reverseArray(arr1);

	}
}

class Number1
{
	public int reverse(int no)
	{
		int rev=0,i=0;

		while(no!=0)
		{
			rev=rev*10+no%10;
			no=no/10;
		}
		return rev;
	}

	public void reverseArray(int arr1[])
	{
		int i=0,j=0,icnt=0,ino=0;
		int iret=arr1.length;
		int newX[]=new int[iret];

		for(i=0;i<iret;i++)
		{
			int no=arr1[i];
			ino=reverse(no);

			newX[j]=ino;
			j++;
		}

		for(j=0;j<iret;j++)
		{
			System.out.print(newX[j]+"\t");
		}
	}
}