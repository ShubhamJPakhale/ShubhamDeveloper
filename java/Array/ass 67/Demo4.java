import java.lang.*;
import java.util.*;

class Demo4
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

		Number4 obj1=new Number4();

		System.out.println("combination of each array in one array is :");
		obj1.array(arr1,arr2);
	}
}

class Number4
{
	public void array(int arr1[],int arr2[])
	{
		int i=0,j=0,k=0;
		int iret=arr1.length+arr2.length;
		int Newarray[]=new int [iret];

		for(i=0;i<arr1.length;i++)
		{
			Newarray[k]=arr1[i];
			k++;
		}
		
		for(j=0;j<arr2.length;j++)
		{
			Newarray[k]=arr2[j];
			k++;
		}

		for(k=0;k<iret;k++)
		{
			System.out.print(Newarray[k]+"\t");
		}
		
	}
}