import java.util.Scanner;
public class palindromecheck
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int rev=0;
        int temp=n;
        while(n > 0)    
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        if(temp==rev)
        {
            System.out.println("palindrome");
        }
        else
        {
            System.out.println("not a palindrome");
        }
    }
}