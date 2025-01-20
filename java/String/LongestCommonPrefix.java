package String;

// import java.util.Arrays;
import java.util.Scanner;

public class LongestCommonPrefix {

    public static String longestCommonPrefix(String[] strs) {
        // if (strs.length == 0) {
        //     return "";
        // }
        // Arrays.sort(strs);
        // String first = strs[0];
        // String last = strs[strs.length-1];

        // StringBuilder ans = new StringBuilder();

        // for (int i = 0; i < Math.min(first.length(),last.length()); i++) {
        //     if (first.charAt(i) == last.charAt(i)) {
        //         ans.append(first.charAt(i));
        //     } else {
        //         break;
        //     }
        // }
        // return ans.toString();

        if (strs.length == 0) {
            return "";
        }
        String prefix=strs[0];
        for(int i=1;i<strs.length;i++){
            while(strs[i].indexOf(prefix)!=0){
                prefix=prefix.substring(0,prefix.length()-1);
            }
        }
        return prefix;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextLine();
        }
        System.out.println(longestCommonPrefix(arr));
        sc.close();
    }
}
