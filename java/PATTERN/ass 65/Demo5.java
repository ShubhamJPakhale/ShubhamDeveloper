import java.lang.*;
import java.util.*;

class Demo5
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter row Number :");
		int irow=obj.nextInt();

		System.out.println("Enter coloumn Number :");
		int icol=obj.nextInt();

		Number5 obj1=new Number5();

		obj1.pattern1(irow,icol);
	}
}

class Number5
{
	public void pattern1(int irow,int icol)
	{
		int i=0,j=0;
		int iret=icol;

		for(i=1;i<(irow+1);i++)
		{
			for(j=1;j<(icol+1);j++)
			{
				if((j==1)||(i==1)||(j==(icol))||(i==(irow))||(i==j))
				{
					System.out.print(j+"\t");
				}
				else 
				{
					System.out.print(" \t");
				}
			}
			System.out.println();
		}
	}
}