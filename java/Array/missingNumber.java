import java.util.ArrayList;
import java.util.Scanner;

public class missingNumber {

    public static int findMissingNumber(int[] arr, int n) {
        // int total = (n * (n + 1)) / 2;
        // int sum = 0;
        // for (int i = 0; i < n - 1; i++) {
        //     sum += arr[i];
        // }
        // return total - sum;

        // for(int i=0;i<=n;i++)
        // {
        //     int flag=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i==arr[j])
        //         {
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0)
        //     {
        //         return i;
        //     }
        // }
        // return 0;

        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (!list.contains(arr[i])) {
                list.add(arr[i]);
            }
        }
        for (int i = 0; i <= n; i++) {
            if (!list.contains(i)) {
                return i;
            }
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        System.out.println(findMissingNumber(arr, n));
        s.close();
    }
}
