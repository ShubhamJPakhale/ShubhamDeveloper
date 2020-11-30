import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		int i=0;
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

		System.out.println("PERCENTAGE WISE CLASS AS FOLLOWS : ");
		obj1.percentage(arr1);

	}
}

class Number5 
{
	public void percentage(int arr1[])
	{
		int i=0,j=0,icnt=0,isum=0;
		int iret=arr1.length;
		
		for(i=0;i<iret;i++)
		{
			if(arr1[i]<=50)
			{
				System.out.println(arr1[i]+" FAIL");
			}
			else if(arr1[i]<=50)
			{
				System.out.println(arr1[i]+" PASS CLASS");
			}
			else if(arr1[i]<=60)
			{
				System.out.println(arr1[i]+" SECOND CLASS");
			}
			else if(arr1[i]<=70)
			{
				System.out.println(arr1[i]+" FIRST CLASS");
			}
			else 
			{
				System.out.println(arr1[i]+" FIRST CLASS WITH DISTINCTION");
			}
		}
	}
}
		