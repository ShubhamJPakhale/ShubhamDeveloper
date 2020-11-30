/* accept string from user and count no of word in string 
LOGIC : if space occurs then incerment position of arr and check whether next position element is no white space 
if word apperarce thhen count number and increment position till white space comes..

*/

import java.lang.*;
import java.util.*;

class DemoWord
{
	public static void main(String[] args)
	{
		int iret=0;
		Scanner obj=new Scanner(System.in);

		System.out.println("enter  string :");
		String str=obj.nextLine();

		Numbers obj1=new Numbers();

		iret=obj1.NoofWord(str);
		System.out.println("enter  word in string is : "+iret);
		
	}
}

class Numbers
{
	int NoofWord(String str)
	{
		int icnt=0,i=0;
		int size=str.length();
		char ch[]=str.toCharArray();

		while(i<size)
		{
			if(ch[i]==' ')
			{
				while((i<size) && (ch[i]==' '))
				{
					i++;
				}
			}
			else if((ch[i]!=' ') &&(i<size))
			{
				icnt++;
				while((i<size) && (ch[i]!=' '))
				{
					i++;
				}
			}
			
		}
		return icnt;
	}
}
