import java.lang.*;
import java.util.*;

class Demo1
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter row Number :");
		int irow=obj.nextInt();

		System.out.println("Enter coloumn Number :");
		int icol=obj.nextInt();

		Number1 obj1=new Number1();

		obj1.pattern1(irow,icol);
	}
}

class Number1
{
	public void pattern1(int irow,int icol)
	{
		int i=0,j=0;
		int iret=icol;

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				if(j==(iret-i-1))
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.println();
		}
	}
}