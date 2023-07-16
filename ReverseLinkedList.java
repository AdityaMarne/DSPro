

public class ReverseLinkedList {
	Node head;
	private int size;
	
	ReverseLinkedList(){
		this.size = 0;;
	}
	
	
	class Node
	{
		int data;
		Node next;
		
		Node(int data)
		{
			this.data = data;
			this.next = null;
			size++;
		}
	}
	
	//Add element to first position
	public void addFirst(int data)
	{
		Node newNode=new Node(data);
		if(head == null)
		{
			head = newNode;
			return;
		}
		
		newNode.next = head;
		head = newNode;
	}
	
	//Add element to last position
	public void addLast(int data)
	{
		Node newNode=new Node(data);
		if(head == null)
		{
			head = newNode;
			return;
		}
		
		Node currNode = head;
		while(currNode.next != null)
		{
			currNode = currNode.next;
		}
		
		currNode.next = newNode;
	}
	
	//Print linked list
	public void printList()
	{
		if(head == null)
		{
			System.out.println("List is empty");
			return;
		}
		Node currNode = head;
		while(currNode != null)
		{
			System.out.print(currNode.data +"->");
			currNode = currNode.next;
		}
		System.out.print("Null");
	}
	
	//Delete first node
	public void delFirst()
	{
		if(head == null)
		{
			System.out.println("The list is empty");
			return;
		}
		size--;
		head = head.next;
	}
	
	//Delete last node
		public void delLast()
		{
			if(head == null)
			{
				System.out.println("The list is empty");
				return;
			}
			size--;
			if(head.next == null)
			{
				head = null;
				return;
			}
			
			Node secondLast = head;
			Node lastNode = head.next;
			while(lastNode.next != null)
			{
				lastNode = lastNode.next;
				secondLast = secondLast.next;
			}
			
			secondLast.next = null;
		}
		
		//Size of linked list
		public int getSize()
		{
			return size;
		}
		
		//Reversing link list
		public void reverseIterator()
		{
			if(head == null || head.next == null)
			{
				return;
			}
			
			Node prevNode = head;
			Node currNode = head.next;
			while(currNode != null)
			{
				Node nextNode = currNode.next;
				currNode.next = prevNode;
				
				//update
				prevNode = currNode;
				currNode = nextNode;
				
			}
			head.next = null;
			head = prevNode;
		}
		
		//Reversing link list using recursion
		public Node reverseRecursion(Node head)
		{
			if(head == null || head.next == null)
			{
				return head;
			}
			Node newHead = reverseRecursion(head.next);
			head.next.next = head;
			head.next = null;
			
			return newHead;
		}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ReverseLinkedList list=new ReverseLinkedList();
		list.addLast(1);
		list.addLast(2);
		list.addLast(3);
		list.addLast(4);
		list.printList();
		
		list.reverseIterator();
		list.printList();
		
		list.head = list.reverseRecursion(list.head);
		list.printList();
	}

}
