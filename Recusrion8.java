import java.util.*;
//Print reverse of string

public class Recusrion8 {
	public static void printRev(String str,int idx) {
		if(idx==0)
		{
			System.out.println(str.charAt(idx));
			return;
		}
		System.out.println(str.charAt(idx));
		printRev(str, idx-1);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str="abcd";
		int idx = str.length()-1;
		printRev(str,idx);
	}

}
