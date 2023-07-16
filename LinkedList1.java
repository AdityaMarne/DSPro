
public class LinkedList1 {
	Node head;
	private int size;
	
	LinkedList1(){
		this.size = 0;;
	}
	
	
	class Node
	{
		String data;
		Node next;
		
		Node(String data)
		{
			this.data = data;
			this.next = null;
			size++;
		}
	}
	
	//Add element to first position
	public void addFirst(String data)
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
	public void addLast(String data)
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
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList1 ll=new LinkedList1();
		ll.addFirst("a");
		ll.addFirst("is");
		ll.printList();
		
		ll.addLast("last");
		ll.printList();
		
		ll.addFirst("This");
		ll.printList();
		
		ll.delFirst();
		ll.printList();
		
		ll.delLast();
		ll.printList();
		
		System.out.println(ll.getSize());
		}

}
