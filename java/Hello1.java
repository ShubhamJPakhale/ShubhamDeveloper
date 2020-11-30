import java.lang.*;
import java.util.*;

abstract class Demo
{
	public  int i=11;

	public int Sustract(int iNo1,int iNo2)
	{
		int result=0;
		result=iNo1-iNo2;
		return result;
	}

	abstract public void Interest();
}

class Arithmetc extends Demo
{
	public int X=21;

	public int Add(int iNo1,int iNo2)
	{
		int result=0;
		result=iNo1+iNo2;
		return result;
	}

	public void Interest()
	{
		System.out.println("Interest rate of PNB bank is 5.5% ppa");
		System.out.println("Value of I in upper class is "+(super.i));
		System.out.println("Value of X is "+(this.X));
	}
}

class Hello1
{
	public static void main(String arg[])
	{
		int result=0,ino1=0,ino2=0,result1=0;
		
		System.out.println("Jay ganesh!!");
		Scanner obj=new Scanner(System.in);
		
		System.out.println("First Number is ");
		ino1=obj.nextInt();
		
		System.out.println("second Number is ");
		ino2=obj.nextInt();
		
		Arithmetc obj1=new Arithmetc();
		
		result=obj1.Add(ino1,ino2);
		
		System.out.println("Addition of two number is "+result);
		
		System.out.println("Sustraction problem in java");
		System.out.println("First Number is ");
		ino1=obj.nextInt();
		
		System.out.println("second Number is ");
		ino2=obj.nextInt();
		
		result1=obj1.Sustract(ino1,ino2);
		
		System.out.println("substraction of two number is "+result1);
		
		obj1.Interest();
	}
}