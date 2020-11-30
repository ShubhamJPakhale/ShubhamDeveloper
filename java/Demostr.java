/*reverse each word og string and print string using tosring method
*/

import java.lang.*;
import java.util.*;

class Demostr
{
	public static void main(String arg[])
	{
		Scanner obj=new Scanner(System.in);

		System.out.println("Enter string :");
		string str=obj.nextLine();

		Hello Hobj=new Hello();

		string arr=ReverseWord(str);
		System.out.println("Reverse each word string is :"+arr);
	}
}

class Hello
{
	string ReverseWord(string str)
	{
		int i=0,j=0;
		char ch=str.toCharArray();

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
	}
}