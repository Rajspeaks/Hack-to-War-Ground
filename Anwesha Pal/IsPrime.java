import java.util.Scanner;
public class IsPrime {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter input");
		int t = sc.nextInt();
		for(int i=0;i<t;i++) {
			int n=sc.nextInt();
			int count=0;
			if(n==1) {
				System.out.println("nor prime nor composite");
				continue;
			}
			
			for(int f=2;f<=Math.sqrt(n);f++)
			{
				 if(n%f==0) {
						count++;
						break;
					}
			}
			if(count==0) {
				System.out.println("prime");
			}
			else {
				System.out.println(" not prime");
			}
		}
		
	}

}
