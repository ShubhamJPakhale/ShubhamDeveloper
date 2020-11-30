import package1.MarvellousArray;
import java.lang.*;
import java.util.*;

class Demo
{
	public static void main(String args[])
	{
		System.out.println("Hello public");
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter Number :");
		int a=obj.nextInt();

		MarvellousArray obj1=new MarvellousArray(a);

		obj1.accept();
		
		obj1.Display();

		System.out.println();
		obj1.Count();
	}
}

//C:\Users\hp\Desktop\LB\java\PACKAGES>javac -d . MarvellousArray.java

//C:\Users\hp\Desktop\LB\java\PACKAGES>javac Demo.java

//C:\Users\hp\Desktop\LB\java\PACKAGES>java Demo.java