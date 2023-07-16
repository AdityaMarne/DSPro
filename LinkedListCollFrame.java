import java.util.*;

public class LinkedListCollFrame {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList<String> list=new LinkedList<String>();
		
		list.addFirst("a");
		list.addFirst("is");
		System.out.println(list);
		
		list.addLast("this");
		list.addFirst("List");
		System.out.println(list);
		
		System.out.println(list.size());
		
		for(int i=0; i<list.size(); i++)
		{
			System.out.print(list.get(i)+"->");
		}
		System.out.print("Null");
		
		list.removeFirst();
		System.out.println(list);
		
		list.removeLast();
		System.out.println(list);
	}

}
