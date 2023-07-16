import java.util.*;
//Find the 1st and last occurance of an elements in string
public class Recusrion9 {
	
	public static int first = -1;
	public static int last = -1;
	
	public static void findOccurance(String str,int idx,char element)
	{
		if(idx == str.length())
		{
			System.out.println(first);
			System.out.println(last);
			return;
		}
		
		char currChar = str.charAt(idx);
		if(currChar == element)
		{
			if(first == -1)
			{
				first = idx;
			}else {
				last = idx;
			}
		}
		
		findOccurance(str,idx+1,element);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "abaacdaefaah";
		findOccurance(str,0,'a');
	}

}
