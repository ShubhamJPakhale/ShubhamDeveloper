import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int CountDiff(int value)
	{
		int iDigit=0,even=0,odd=0,Differ=0;

		while(value !=0)
		{
			iDigit=value%10;
			if((iDigit %2)==0)
			{
				even=even+iDigit;
			}
			else
			{
				odd=odd+iDigit;
			}
			value=value/10;
		}
		Differ=even-odd;
		return Differ;
	}
}

class A545
{
	public static void main(String[] args) 
	{
		int ret=0;
		ArrayDemo obj1=new ArrayDemo();
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number :");
		int value=obj.nextInt();

		ret=obj1.CountDiff(value);
		System.out.println("Difference in even and odd Digit count is :"+ret);
	}
}