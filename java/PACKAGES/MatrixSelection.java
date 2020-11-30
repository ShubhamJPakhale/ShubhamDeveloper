import java.lang.*;
import java.util.*;

class MatrixSort
{
	public void RowSort(int arr[][])
	{
		int Min_Index=0;

		for(int k=0;k<arr.length;k++)
		{
			for(int i=0;i<arr[k].length-1;i++)
			{
				Min_Index=i;

				for(int j=i+1;j<arr[k].length;j++)
				{
					if(arr[k][Min_Index]>arr[k][j])
					{
						Min_Index=j;
					}
				}
				if(arr[k][i]!=arr[k][Min_Index])
				{
					int temp=arr[k][i];
					arr[k][i]=arr[k][Min_Index];
					arr[k][Min_Index]=temp;
				}
			}
		}
	}
}

class MatrixSelection
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of row in Matrix array :");
		int row=sobj.nextInt();

		System.out.println("Enter Number of coloumns in Matrix array :");
		int col=sobj.nextInt();

		int arr[][]=new int [row][col];

		System.out.println("Enter elements of array :");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j]=sobj.nextInt();
			}
		}

		System.out.println("Entered elements of array are:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
		}
		System.out.println();

		MatrixSort obj=new MatrixSort();
		obj.RowSort(arr);

		System.out.println("Array after rowSort by Selection sorting is :");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
		}
	}
}