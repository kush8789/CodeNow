package String;

import java.util.Scanner;

public class LargestOddNo {
    public static String LargestOdd(String n) {
        String ans = "";
        for (int i = 0; i < n.length(); i++) {
            if (Character.getNumericValue(n.charAt(i)) % 2 != 0) {
                ans = n.substring(i, n.length());
                break;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        System.out.println(LargestOdd(n));
        sc.close();
    }
}
