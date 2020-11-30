import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int CountRange(int value)
	{
		int iDigit=0,icnt=0;

		while(value !=0)
		{
			iDigit=value%10;
			if(iDigit >=3 && iDigit <=7)
			{
				icnt++;
			}
			value=value/10;
		}
		return icnt;
	}
}

class A543
{
	public static void main(String[] args) 
	{
		int ret=0;
		ArrayDemo obj1=new ArrayDemo();
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number :");
		int value=obj.nextInt();

		ret=obj1.CountRange(value);
		System.out.println("Number of digit in between 3 to 7 in Number are :"+ret);
	}
}