//Accept Number from user and check whteher that number is strong number or not
//strong number is whose summation of factorial of digit is same
//ex.145= 1! +4! +5!=145

import java.lang.*;
import java.util.*;

class Demo2
{
	public static void main(String[] args)
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  first Number");
		int value1=obj.nextInt();

		System.out.println("enter second Number");
		int value2=obj.nextInt();

		Numbers obj1=new Numbers();

		System.out.println("Strong Numbers in range are");
		obj1.chkstrongRange(value1,value2);
	}
}

class Numbers
{
	void chkstrongRange(int ino1,int ino2)
	{
		int isum=0,iDigit=0;
		int istart=ino1,iend=ino2;
		int i=0;
		int ifact[]={1,1,2,6,24,120,720,5040,40320,362880};

		if(istart > iend){return;}

		if(ino1 <=0 || ino2<=0)
		{
			return;
		}

		int ino=ino1;

		for(i=istart;i<=iend;i++)
		{
			ino=i;
			while(ino !=0)
			{
				isum=isum+ifact[ino%10];
				if(isum>i)
				{
					break;
				}
				ino=ino/10;
			}
		}
		
		if(i ==isum)
		{
			System.out.println(i);
		}
		isum=0;
	}
}