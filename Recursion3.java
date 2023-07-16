import java.util.*;
//Factorial of n
public class Recursion3 {
	public static int fact(int n)
	{
		if(n==1 || n==0)
		{
			return 1;
		}
		
		int fact_nm1 = fact(n-1);
		int fact_n = n * fact_nm1;
		return fact_n;
	}
	
	public static void main(String[] args) {
	// TODO Auto-generated method stub
		int n=5;
		int ans = fact(n);
		System.out.println(ans);
	}

}
