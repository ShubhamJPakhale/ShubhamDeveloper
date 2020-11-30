import java.lang.*;
import java.io.*; 
import java.util.*;

class file1
{
	public static void main(String args[])
	{
		System.out.println("File Handling program");
		
		try
		{
			File obj=new File("shubham.txt");
			FileWriter wobj=new FileWriter("shubham.txt");
			//File obj=new File("C:\\Users\\hp\\desktop\\lb\\shubham11.txt");  
			//directory specific file creation
			
			if(obj.createNewFile())
			{
				System.out.println("File created : "+obj.getName());
			}
			else
			{
				System.out.println("File already exist");
			}
			
			wobj.write("SHUBHAM JITENDRA PAKHALE");
			wobj.close();
			System.out.println("Successfully wrote in the File");
		}
		catch(Exception obj1)
		{
			System.out.println("an error occured");
		}
	}
}