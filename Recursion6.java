import java.util.*;
//Calculate x^n stack size=log(n)

public class Recursion6 {
	public static int calcPow(int x ,int n)
	{
		if (n==0)
		{
			return 1;
		}
		if (x==0)
		{
			return 0;
		}
		
		if (n % 2 == 0)
		{	
			//n is even
			return calcPow(x,n/2) * calcPow(x,n/2);
		}else {
			//n is odd
			return calcPow(x,n/2) * calcPow(x,n/2) * x;
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=2,n=5;
		int ans = calcPow(x,n);
		System.out.println(ans);
	}

}
