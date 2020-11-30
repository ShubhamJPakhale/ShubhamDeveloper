import java.lang.*;
import java.util.*;


class Bubble
{
	public void Sort(int arr[])
	{
		int pass=0,j=0,no=0,temp=0;
		boolean flag=true;

		for(pass=0;pass<arr.length && flag==true;pass++)
		{
			no=pass+1;
			flag=false;

			for(j=0;j<arr.length-pass-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					flag=true;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
}

class BubbleSort
{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter size of array :");
		int no=obj.nextInt();

		int arr[]=new int[no];

		System.out.println("Enter elements of array :");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=obj.nextInt();
		}

		System.out.println("Entered elements of array are:");
		for(int j=0;j<arr.length;j++)
		{
			System.out.print(arr[j]+"\t");
		}

		Bubble obj1=new Bubble();

		obj1.Sort(arr);

		System.out.println("\nElements of array after Sorting are:");
		for(int k=0;k<arr.length;k++)
		{
			System.out.print(arr[k]+"\t");
		}

	}
}