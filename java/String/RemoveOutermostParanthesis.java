package String;
import java.util.Scanner;

public class RemoveOutermostParanthesis {

    public static String removeOuterParentheses(String s) {
        String ans = "";
        int balance = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(' && balance++ > 0) {
                ans += c;
            }   
            if (c == ')' && balance-- > 1) {
                ans += c;
            }   
        }   
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String ans = removeOuterParentheses(s);
        System.out.println(ans);
        sc.close();
    }
}
