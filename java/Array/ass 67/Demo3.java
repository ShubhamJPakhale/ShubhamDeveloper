import java.lang.*;
import java.util.*;

class Demo3
{
	public static void main(String arg[])
	{
		int i=0,j=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number of elements in array1:");
		int ino1=obj.nextInt();

		System.out.println("Enter Number of elements in array2:");
		int ino2=obj.nextInt();

		int arr1[]=new int [ino1];
		int arr2[]=new int [ino2];

		System.out.println("Enter elements of first array :");
		for(i=0;i<ino1;i++)
		{
			arr1[i]=obj.nextInt();
		}

		System.out.println("Enter elements of second array :");
		for(j=0;j<ino2;j++)
		{
			arr2[j]=obj.nextInt();
		}

		Number3 obj1=new Number3();

		System.out.println("reverse of each array in combine array is :");
		obj1.reverse(arr1,arr2);
	}
}

class Number3
{
	public void reverse(int arr1[],int arr2[])
	{
		int i=0,j=0,k=0;
		int iret=arr1.length+arr2.length;
		int reversearry[]=new int [iret];

		for(i=(arr1.length-1);i>=0;i--)
		{
			reversearry[k]=arr1[i];
			k++;
		}
		
		for(j=(arr2.length-1);j>=0;j--)
		{
			reversearry[k]=arr2[j];
			k++;
		}

		for(k=0;k<iret;k++)
		{
			System.out.print(reversearry[k]+"\t");
		}
		
	}
}