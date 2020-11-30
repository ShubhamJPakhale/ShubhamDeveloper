import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		int i=0,j=0;
		boolean bret=false;

		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array1:");
		int ino1=obj.nextInt();

		int arr1[]=new int [ino1];
		
		System.out.println("Enter elements of first array :");
		for(i=0;i<ino1;i++)
		{
			arr1[i]=obj.nextInt();
		}

		Number5 obj1=new Number5();

		System.out.println("Program to check array is palindrome or not : ");
		bret=obj1.palindrome(arr1);

		if(bret==true)
		{
			System.out.println("Array is palindrome");
		}
		else
		{
			System.out.println("Array is not palindrome");
		}
	}
}

class Number5
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

	public boolean palindrome(int arr1[])
	{
		int i=0,j=0,icnt=0,ino=0;
		int iret=arr1.length;

		for(i=0,j=(iret-1);i<=j;i++,j--)
		{
			int no=arr1[i];
			ino=reverse(no);
			if(arr1[i] != arr1[j])
			{
				icnt++;
				break;
			}
			else if(arr1[i]!=ino)
			{
				icnt++;
				break;
			}
			ino=0;
		}

		if(icnt ==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}