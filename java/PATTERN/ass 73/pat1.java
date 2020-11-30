import java.lang.*;
import java.util.*;
import java.io.*;

class Diwali
{
	public void Display(int no1,int no2)
	{
		int res=no2*2;
		int ch=65,no=65,j=0;
		int p=j-no2;
		
		for(int i=0;i<no1;i++)
		{
			for(j=0;j<res;j++)
			{
				if(j>=no2-i && j<=no2+i)
				{
					if(j>(no2-i-1) && j<=no2)
					{
						System.out.print((char)(ch)+"\t");
						ch++;
					}
					else
					{
						System.out.print((char)(no+p)+"\t");
						no--;
					}
				}
				else
				{
					System.out.print(" \t");
				}

			}
			System.out.println();
			ch=65;
		}
	}
}

class pat1
{
	public static void main(String args[])
	{
		System.out.println("First pattern program !!");

		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter Number of rows :");
		int row=sobj.nextInt();

		System.out.println("Enter Number of coloumns :");
		int col=sobj.nextInt();

		Diwali obj=new Diwali();

		obj.Display(row,col);
	}
}