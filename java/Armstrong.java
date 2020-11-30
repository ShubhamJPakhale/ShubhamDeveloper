
import java.lang.*;
import java.util.*;

class Armstrong
{
	public static void main(String[] args)
	{
		boolean bret=false;
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first Number");
		int value1=obj.nextInt();

		Numbers obj1=new Numbers();

		bret=obj1.chkArmstrong(value1);
		if(bret ==true)
		{
			System.out.println("Number is armstrong Number");
		}
		else
		{
			System.out.println("Number is not armstrong Number");
		}
	}
}

class Numbers
{
	int countDigit(int no1)
	{
		if(no1 <0)
		{
			no1=-no1;
		}
		int icnt=0;
		while(no1 !=0)
		{
			icnt++;
			no1=no1/10;
		}
		return icnt;
	}

	boolean chkArmstrong(int ino1)
	{
		int isum=0,iDigit=0;
		int temp=ino1;
		int power=countDigit(ino1);
		System.out.println(power);
		if(ino1 <0)
		{
			ino1=-ino1;
		}

		while(ino1 !=0)
		{
			int iNo=1,i=0;
			
			iDigit=ino1%10;
			for(i=1,iNo=1;i<=power;i++)
			{
				iNo=iNo*iDigit;
			}
			isum=isum+iNo;
			if(isum >temp)
			{
				break;
			}
			ino1=ino1/10;
		}

		if(isum == temp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}