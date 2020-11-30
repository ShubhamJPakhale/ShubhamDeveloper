import java.lang.*;
import java.util.*;

class FibonaciRange
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  Range Number");
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
		for(;First<=iNo ;)            //while(First <=iNo)
		{
			System.out.print(First+"\t");
			Third=First +Second;
			First=Second;
			Second=Third;
		}
	}
}