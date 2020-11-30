import java.lang.*;
import java.util.*;
import java.io.*;

class Distance
{
	public void FinalDistance(int a1,int a2,int b1,int b2)
	{
		int result2=a2+b2;
		int no=result2/12;

		int result1=a1+b1+no;

		int no1=result2%12;

		System.out.println(result1+" feet and "+no1+" inches.");
	}
}

class main
{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter first distance in feet :");
		int a1=obj.nextInt();

		System.out.println("Enter first distance in inches :");
		int a2=obj.nextInt();

		System.out.println("Enter second distance in feet :");
		int b1=obj.nextInt();

		System.out.println("Enter second distance in inches :");
		int b2=obj.nextInt();

		Distance dobj=new Distance();

		dobj.FinalDistance(a1,a2,b1,b2);
	}
}