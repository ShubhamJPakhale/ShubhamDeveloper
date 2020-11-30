import java.lang.*;
import java.util.*;

class DemoArray
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  Row Number");
		int value1=obj.nextInt();

		System.out.println("enter  Coloumn Number");
		int value2=obj.nextInt();

		Numbers obj1=new Numbers();

		obj1.pattern1(value1,value2);
	}
}

class Numbers
{

}