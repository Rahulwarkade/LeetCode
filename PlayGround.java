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
	    int arr[][][] = new int[3][2][3];


		System.out.print(arr[2][1][2]);
	}
}