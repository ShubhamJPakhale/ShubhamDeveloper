import java.lang.*;
import java.util.*;

class Selection
{
	public void Sort(int arr[])
	{
		int Min_Index=0;

		for(int i=0;i<arr.length-1;i++)
		{
			Min_Index=i;

			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[Min_Index]>arr[j])
				{
					Min_Index=j;
				}
			}
			if(arr[i]!=arr[Min_Index])
			{
				int temp=arr[i];
				arr[i]=arr[Min_Index];
				arr[Min_Index]=temp;
			}
		}
	}
}

class SelectionSort
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of elements in array :");
		int no=sobj.nextInt();

		int arr[]=new int [no];

		System.out.println("Enter elements of array :");
		for(int j=0;j<no;j++)
		{
			arr[j]=sobj.nextInt();
		}

		System.out.println("Entered elements of array are:");
		for(int k=0;k<no;k++)
		{
			System.out.print(arr[k]+"\t");
		}
		System.out.println();

		Selection obj=new Selection();
		obj.Sort(arr);

		System.out.println("Array after Selection sorting is :");
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
	}
}