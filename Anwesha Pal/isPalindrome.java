import java.util.*;
public class isPalindrome {
	static String is_palindrome(int n)
    {
        int original= n;
        int rem;
        int result=0;
        while(n!=0)
        {
            rem=n%10;
            result=result*10+ rem;
            n=n/10;
        }
        if (result== original)
        {
            return "Yes";
        }
        else
            return "No";
    }
	
	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter a number");
		int num1= sc.nextInt();
		System.out.println(is_palindrome(num1));

	}

}
