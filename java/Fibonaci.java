
import java.lang.*;
import java.util.*;

class Fibonaci
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first Number");
		int value1=obj.nextInt();

		Numbers obj1=new Numbers();

		obj1.Fibseries(value1);
	}
}

class Numbers
{
	void Fibseries(int iNo)
	{
		int First=0,Second=1,Third=0;
		System.out.println();
		for(int i=1;i<=iNo;i++)
		{
			System.out.print(First+"\t");
			Third=First +Second;
			First=Second;
			Second=Third;
		}
	}
}