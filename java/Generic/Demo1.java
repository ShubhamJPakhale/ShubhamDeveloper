import java.lang.*;
import java.util.*;

class Node
{
	public int data;
	public Node next;

	public Node(int value)
	{
		data=value;
		next=null;
	}
}

class SinglyLinkedList
{
	public Node Head;

	public SinglyLinkedList()
	{
		Head= null;
	}

	public void InsertFirst(int no)
	{
		Node newn=new Node(no);
		if(Head==null)
		{
			Head=newn;
		}
		else
		{
			newn.next=Head;
			Head =newn;
		}
	}

	public void Display()
	{
		Node temp=Head;

		while(temp !=null)
		{
			System.out.print("|"+temp.data+"|");
			temp=temp.next;
		}
		System.out.println();
	}

	public int Count()
	{
		int icnt=0;
		Node temp=Head;

		while(temp !=null)
		{
			icnt++;
			temp=temp.next;
		}
		return icnt;
	}

	public void InsertLast(int no)
    {
        Node newn = new Node(no);    // Kamal statement ahe
        if(Head == null)
        {
            Head = newn;
        }
        else
        {
            Node temp = Head;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
    }

    public void DeleteFirst()
    {
    	if(Head==null)
    	{
    		return;
    	}
    	else
    	{
    		Head=Head.next;
    	}
    }

    public void DeleteLast()
    {
        if(Head == null)    // Empty
        {
            return;
        }
        else
        {
            Node temp = Head;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
    }
}

class Demo1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Jai Ganesh!!");
		System.out.println("Enter Your choice: ");
		SinglyLinkedList obj=new SinglyLinkedList();
		obj.InsertFirst(11);
		obj.InsertFirst(21);
		obj.InsertFirst(51);

		obj.Display();

		obj.InsertLast(101);
		obj.InsertLast(121);

		obj.Display();
		
		System.out.println("Number of Nodes are :"+obj.Count());

		obj.DeleteFirst();
		obj.Display();
		obj.DeleteLast();
		obj.Display();
	}
}