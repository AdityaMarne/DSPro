import java.util.*;

public class Recursion1 {
	public static void printNum(int n)
	{
		if(n==0)
		{
			return;
		}
		System.out.println(n);
		printNum(n-1);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		printNum(5);
	}

}
