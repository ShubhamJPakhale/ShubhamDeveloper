import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int Multiplication(int value)
	{
		int iDigit=0,iMult=1;

		while(value !=0)
		{
			iDigit=value%10;
			iMult=iMult * iDigit;
			value=value/10;
		}
		return iMult;
	}
}

class A544
{
	public static void main(String[] args) 
	{
		int ret=0;
		ArrayDemo obj1=new ArrayDemo();
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number :");
		int value=obj.nextInt();

		ret=obj1.Multiplication(value);
		System.out.println("Multiplication of Digit are :"+ret);
	}
}