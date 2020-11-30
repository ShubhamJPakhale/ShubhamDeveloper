import java.lang.*;
import java.util.*;

class Hello
{
	public void NoBetween(int arr[],int istart,int iend)
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >=istart) && (arr[i]<=iend))
			{
				System.out.println(arr[i]);
			}
		}
	}
}
class A554
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter number of elements in array :");
		int no=obj.nextInt();

		System.out.println("Enter starting range number :");
		int istart=obj.nextInt();
		System.out.println("Enter ending range number :");
		int iend=obj.nextInt();

		int arr[]=new int [no];

		System.out.println("Enter number of elements of array :");
		for(int i=0;i<no;i++)
		{
			arr[i]=obj.nextInt();
		}

		Hello Hobj=new Hello();
		System.out.println("NUmber between range are :");
		Hobj.NoBetween(arr,istart,iend);
	}
}