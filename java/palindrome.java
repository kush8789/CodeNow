import java.util.Scanner;

public class palindrome {

    public static boolean isPalindrome(String s){
         int left=0,right=s.length()-1;
    while(left<right)
    {
        char l=s.charAt(left),r=s.charAt(right);
        if(!Character.isLetterOrDigit(l))
        {
            left++;
        }
        else if(!Character.isLetterOrDigit(r))
        {
            right--;
        }
        else if(Character.toLowerCase(l)!=Character.toLowerCase(r))
        {
            return false;
        }
        else{
        left++;
        right--;
        }
    }
    return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        boolean isapalindrome = isPalindrome(s);
        if(isapalindrome)
        {
            System.err.println("palindrome");
        }
        else
        {
            System.err.println("not a palindrome");
        }
        sc.close();
    }
}