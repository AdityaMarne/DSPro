import java.util.*;
//Tower of Hanoi

public class Recursion7 {
	public static void towerOfHanoi(int n,String src,String helper, String des)
	{
		if(n==1)
		{ 
			System.out.println("Transfer disk "+ n +" from "+ src +" to "+ des);
			return;
		}
		towerOfHanoi(n-1,src,des,helper);
		System.out.println("Transfer of disk "+ n +" from "+ src +" to "+ des);
		towerOfHanoi(n-1,helper,src,des);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n=3;
		towerOfHanoi(n,"S","H","D");
	}

}
