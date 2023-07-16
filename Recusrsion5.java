import java.util.*;
//Calculate x^n stack size=n
public class Recusrsion5 {
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
		
		int xPowmn1 = calcPow(x, n-1);
		int xPow = x * xPowmn1;
		return xPow;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=2,n=5;
		int ans = calcPow(x,n);
		System.out.println(ans);
	}

}
