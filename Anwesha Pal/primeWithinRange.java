import java.util.*;
public class primeWithinRange {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the range:");
		int low=sc.nextInt();
		int high= sc.nextInt();
		for(int i =low;i<=high;i++)
		{
			if(i==1) {
				i++;
			}
			int c=0;
			for (int j =2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					c++;
					break;
				}
			}
			if(c==0)
			{
				System.out.println(i);
			}
			
			
		}
		sc.close();
		
	}

}
