import java.util.*;

class PlayGround
{
	static class Node
	{
		int data;
		Node next;

		Node(int data)
		{
			this.data = data;
			this.next = null;
		}
	}
	public static void printLL(Node head)
	{
		while(head!=null)
		{
			System.out.print(head.data+"->");
			head = head.next;
		}
		System.out.println("NULL");
	}
	public static void main(String args[])
	{
		PlayGround ll = new PlayGround();
		Node head = new Node(2);
		head.next = new Node(3);
		head.next.next = new Node(4);
		printLL(head);
	}
}