import java.lang.*;
import java.util.*;

class Arithmetc
{
	public int Add(int iNo1,int iNo2)
	{
		int result=0;
		result=iNo1+iNo2;
		return result;
	}
}

class Hello
{
	public static void main(String arg[])
	{
		int result=0,ino1=0,ino2=0;
		
		System.out.println("Jay ganesh!!");
		Scanner obj=new Scanner(System.in);
		
		System.out.println("First Number is ");
		ino1=obj.nextInt();
		
		System.out.println("second Number is ");
		ino2=obj.nextInt();
		
		Arithmetc obj1=new Arithmetc();
		
		result=obj1.Add(ino1,ino2);
		
		System.out.println("Addition of two number is "+result);
		
	}
}