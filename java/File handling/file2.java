import java.lang.*;
import java.io.*; 
import java.util.*;

class file2
{
	public static void main(String args[])
	{
		System.out.println("File Handling program");
		
		try
		{
			File obj=new File("shubham.txt");
			Scanner sobj=new Scanner(obj);

			while(sobj.hasNextLine())
			{
				String data= sobj.nextLine();
				System.out.println(data);
			}
			sobj.close();
			System.out.println("Successfully read from the File");

			if(obj.exists())
			{
				System.out.println("File Name : "+obj.getName());
				System.out.println("File path : "+obj.getAbsolutePath())
			}
		}
		catch(Exception obj1)
		{
			System.out.println("an error occured");
		}
	}
}