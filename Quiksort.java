import java.util.*;

public class Quiksort {
	
	public static int partition(int arr[],int low,int high)
	{
		int pivot = arr[high];
		int i = low-1;
		
		for(int j=low; j<high; j++)
		{
			if(arr[j] < pivot)
			{
				i++;
				//swap
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		i++;
		int temp = arr[i];
		arr[i] = pivot;
		arr[high] = temp;
		return i;//pivot index
	}
	
	public static void quikSort(int arr[],int low,int high)
	{
		if(low < high)
		{
			int pivitidx = partition(arr,low,high);
			
			quikSort(arr,low,pivitidx-1);
			quikSort(arr,pivitidx+1,high);
		}
			
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {6,3,9,5,2,8};
		int n = arr.length;
		
		quikSort(arr,0,n-1);
		
		//print
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]+" ");
		}
		System.out.println();
	}

}
