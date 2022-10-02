/*https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1*/
import java.util.*;
public class isTriplet {
	
	static boolean checkTriplet(int[] arr, int n) {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int x=arr[i]*arr[i];
                    int y=arr[j]*arr[j];
                    int z=arr[k]*arr[k];
                    if(x+y==z || y+z==x ||z+x==y)
                    {
                        return true;
                    }
                }
                
            }
        
        }
    return false;
    }

	public static void main(String[] args) {
		
		
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter THe total number of elements into the array:");
		int n= sc.nextInt();
		int [] arr = new int[n];
		System.out.println("Enter THe elements of the array:");
		for (int i =0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		boolean ans=checkTriplet(arr,n);
		if (ans==true)
		{
			System.out.println("triplet possible");
		}
		else
		{
			System.out.println("triplet not possible");
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}

}
