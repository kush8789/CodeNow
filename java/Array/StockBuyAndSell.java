import java.util.Scanner;

public class StockBuyAndSell {
    public static int findMaxDifference(int[] a, int n) {
        int mini = Integer.MAX_VALUE;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mini = Math.min(mini, a[i]);
            ans = Math.max(ans, a[i] - mini);
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int ans = findMaxDifference(a, n);
        System.out.println(ans);
        sc.close();
    }
}
