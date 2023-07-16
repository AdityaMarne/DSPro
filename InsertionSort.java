import java.util.*;

public class InsertionSort
{
	public static int sort(int n,int arr[])
	{
		for(int i=1; i<n; i++)
		{
			int current = arr[i];
			int j = i-1;
			while( j >= 0 && current < arr[j])
			{
				arr[j+1] = arr[j];
				j--;
			}
			
			arr[j+1] = current;
		}
		
		System.out.println("Element sorted using insertion sort:");
		for(int i=0; i<n; i++)
		{
			System.out.println(arr[i]);
		}
		return -1;
	}
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no of elemets :");
		int n;
		n = sc.nextInt();
		
		System.out.println("Enter array elemets :");
		int arr[]=new int[n];
		for(int i=0; i<n; i++)
		{
			arr[i] = sc.nextInt();
		}
		
		sort(n,arr);
	}
}